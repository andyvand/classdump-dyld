/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Chess.app/Contents/MacOS/Chess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MBCMoveBuilder
@required
-(void)startMoveList:(char)arg1;
-(void)startUnambiguousMoves;
-(void)endMoveList;
-(void)validMove:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3;
-(void)validMove:(unsigned char)arg1 from:(unsigned char)arg2 to:(unsigned char)arg3 capturing:(unsigned char)arg4;
-(void)validDrop:(unsigned char)arg1 at:(unsigned char)arg2;
-(void)validCastle:(unsigned char)arg1 kingSide:(char)arg2;

@end
