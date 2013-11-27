/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMState.h>

@class EDWorkbook, EDSheet;

@interface EMState : CMState {

	EDWorkbook* _workbook;
	EDSheet* _currentSheet;

}

@property (retain) EDWorkbook * workbook;               //@synthesize workbook=_workbook - In the implementation block
@property (assign) EDSheet * currentSheet;              //@synthesize currentSheet=_currentSheet - In the implementation block
-(void)dealloc;
-(id)workbook;
-(id)currentSheet;
-(void)setWorkbook:(id)arg1 ;
-(void)setCurrentSheet:(id)arg1 ;
@end
