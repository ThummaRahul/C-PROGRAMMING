

🧾 1️⃣ Text Mode File Operations
| Mode   | Meaning                  | File must exist?           | Cursor position                            | Data erased?                       | Typical use                                                    |
| ------ | ------------------------ | -------------------------  | ------------------------------------------ | --------------------------------   | -------------------------------------------------------------- |
| `"r"`  | **Read-only (text)**     | ✅ Yes                     | Beginning                                  | ❌ No                             | Reading a text file (e.g., reading logs, configs)              |
| `"w"`  | **Write-only (text)**    | ❌ No (creates new)        | Beginning                                  | ✅ Yes (overwrites existing file) | Writing new data (e.g., saving report output)                  |
| `"a"`  | **Append-only (text)**   | ❌ No (creates if missing) | End                                        | ❌ No                             | Appending data to end of a file (e.g., adding logs)            |
| `"r+"` | **Read + Write (text)**  | ✅ Yes                     | Beginning                                  | ❌ No                             | Reading and modifying existing text file                       |
| `"w+"` | **Read + Write (text)**  | ❌ No (creates new)        | Beginning                                  | ✅ Yes                            | Rewriting a file completely (both read/write)                  |
| `"a+"` | **Read + Append (text)** | ❌ No (creates if missing) | End (for writing), Beginning (for reading) | ❌ No                             | Add data but also read existing (e.g., open log and review it) |

💾 2️⃣ Binary Mode File Operations
| Mode    | Meaning                    | File must exist?            | Cursor position   | Data erased?  | Typical use                                                    |
| ------- | -------------------------- | -------------------------   | ----------------- | ------------  | -------------------------------------------------------------- |
| `"rb"`  | **Read-only (binary)**     | ✅ Yes                     | Beginning         | ❌ No         | Reading binary files (e.g., images, firmware, serialized data) |
| `"wb"`  | **Write-only (binary)**    | ❌ No (creates new)        | Beginning         | ✅ Yes        | Writing new binary data (e.g., save image or struct data)      |
| `"ab"`  | **Append-only (binary)**   | ❌ No (creates if missing) | End               | ❌ No         | Appending binary logs or data packets                          |
| `"rb+"` | **Read + Write (binary)**  | ✅ Yes                     | Beginning         | ❌ No         | Modify part of a binary file without losing data               |
| `"wb+"` | **Read + Write (binary)**  | ❌ No (creates new)        | Beginning         | ✅ Yes        | Recreate binary file and read/write it                         |
| `"ab+"` | **Read + Append (binary)** | ❌ No (creates if missing) | End (for writing) | ❌ No         | Append and inspect binary data                                 |
