/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDBaseGroupCommand.h>

@interface TSDUngroupGroupCommand : TSDBaseGroupCommand
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithGroup:(id)arg1 subcommandProvider:(id)arg2 objectContext:(id)arg3 ;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)actionString;
@end
