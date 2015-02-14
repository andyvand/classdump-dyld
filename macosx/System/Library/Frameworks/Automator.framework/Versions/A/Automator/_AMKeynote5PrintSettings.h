/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@class NSDate, NSString;

@interface _AMKeynote5PrintSettings : SBObject

@property (assign) long long copies; 
@property (assign) char collating; 
@property (assign) long long startingPage; 
@property (assign) long long endingPage; 
@property (assign) long long pagesAcross; 
@property (assign) long long pagesDown; 
@property (copy) NSDate * requestedPrintTime; 
@property (assign) int errorHandling; 
@property (copy) NSString * faxNumber; 
@property (copy) NSString * targetPrinter; 
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)saveAs:(id)arg1 in:(id)arg2 ;
-(long long)copies;
-(void)setCopies:(long long)arg1 ;
-(char)collating;
-(void)setCollating:(char)arg1 ;
-(long long)startingPage;
-(void)setStartingPage:(long long)arg1 ;
-(long long)endingPage;
-(void)setEndingPage:(long long)arg1 ;
-(long long)pagesAcross;
-(void)setPagesAcross:(long long)arg1 ;
-(long long)pagesDown;
-(void)setPagesDown:(long long)arg1 ;
-(NSDate *)requestedPrintTime;
-(void)setRequestedPrintTime:(NSDate *)arg1 ;
-(int)errorHandling;
-(void)setErrorHandling:(int)arg1 ;
-(NSString *)faxNumber;
-(void)setFaxNumber:(NSString *)arg1 ;
-(NSString *)targetPrinter;
-(void)setTargetPrinter:(NSString *)arg1 ;
-(void)pauseSlideshow;
-(void)resumeSlideshow;
-(void)stopSlideshow;
-(void)addChartColumnNames:(id)arg1 data:(long long)arg2 groupBy:(int)arg3 rowNames:(id)arg4 type:(int)arg5 ;
-(void)addFilePath:(id)arg1 ;
-(void)advance;
-(void)makeImageSlidesPaths:(id)arg1 master:(id)arg2 setTitles:(char)arg3 ;
-(void)showNext;
-(void)showPrevious;
-(void)startFrom;
-(char)exists;
-(void)start;
@end

