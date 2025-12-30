┌──────────────┐
│ User / ESP32 │
│  Web Request │
└──────┬───────┘
       │
       ▼
┌────────────────────┐
│ Google Apps Script │
│  (doGet Trigger)   │
└──────┬─────────────┘
       │
       ▼
┌────────────────────┐
│ Parameter Extract  │
│ (Roll Number)      │
└──────┬─────────────┘
       │
       ▼
┌────────────────────┐
│ Date & Time Module │
│ (Current Timestamp)│
└──────┬─────────────┘
       │
       ▼
┌────────────────────┐
│ Google Sheet       │
│ Row Append Block   │
└──────┬─────────────┘
       │
       ▼
┌────────────────────┐
│ Response Generator │
│   ("Success")      │
└────────────────────┘
