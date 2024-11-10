const fs = require("fs");
const PDFDocument = require("pdfkit");

// Function to convert txt to PDF
function convertTxtToPdf(inputTxtFile, outputPdfFile) {
  // Create a new PDF document
  const doc = new PDFDocument();

  // Pipe the PDF into a writable stream
  doc.pipe(fs.createWriteStream(outputPdfFile));

  // Read the content of the .txt file
  fs.readFile(inputTxtFile, "utf8", (err, data) => {
    if (err) {
      console.error("Error reading the txt file:", err);
      return;
    }

    // Add the content of the txt file to the PDF
    doc.fontSize(12).text(data);

    // Finalize the PDF file
    doc.end();
    console.log(`PDF created successfully: ${outputPdfFile}`);
  });
}

// Call the function to convert 'input.txt' to 'output.pdf'
convertTxtToPdf("Tax-5.txt", "Tax-5.pdf");
