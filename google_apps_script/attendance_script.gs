function doGet(e) {
  var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("Sheet1");

  var roll = e.parameter.roll;
  var date = new Date();

  sheet.appendRow([
    roll,
    date.toLocaleDateString(),
    date.toLocaleTimeString()
  ]);

  return ContentService.createTextOutput("Success");
}
