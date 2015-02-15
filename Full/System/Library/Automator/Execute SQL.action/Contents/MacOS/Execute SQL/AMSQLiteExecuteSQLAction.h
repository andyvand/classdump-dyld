/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:56:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Automator/Execute SQL.action/Contents/MacOS/Execute SQL
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class NSTextField, NSPopUpButton;

@interface AMSQLiteExecuteSQLAction : AMBundleAction {

	NSTextField* _sqlCommandsLabel;
	NSTextField* _sqlCommandsField;
	NSTextField* _outputFormatLabel;
	NSPopUpButton* _outputFormatPopUp;

}
-(id)inputArrayFromInput:(id)arg1 ;
-(id)executeSQLStatements:(id)arg1 againstDatabase:(id)arg2 error:(id*)arg3 ;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(int)outputFormat;
-(void)setOutputFormat:(int)arg1 ;
-(id)commandString;
-(void)setCommandString:(id)arg1 ;
@end

