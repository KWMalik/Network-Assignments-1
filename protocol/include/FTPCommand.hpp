/*
5.1.  MINIMUM IMPLEMENTATION

      In order to make FTP workable without needless error messages, the
      following minimum implementation is required for all servers:

         TYPE - ASCII Non-print
         MODE - Stream
         STRUCTURE - File, Record
         COMMANDS - USER, QUIT, PORT,
                    TYPE, MODE, STRU,
                      for the default values
                    RETR, STOR,
                    NOOP.

      The default values for transfer parameters are:

         TYPE - ASCII Non-print
         MODE - Stream
         STRU - File

      All hosts must accept the above as the standard defaults.

USER =>	Authentication username
QUIT => Disconnect
PORT => Specifies an address and port to which the server should connect
TYPE =>	Sets the transfer mode (ASCII/Binary)
MODE => Sets the transfer mode (Stream, Block, or Compressed)
STRU => Set file transfer structure
RETR => Transfer a copy of the file
STOR => Accept the data and to store the data as a file at the server site
NOOP => No operation (dummy packet; used mostly on keepalives)

*/


class FTPCommand
{




};
