/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScriptingBridge/SBObject.h>

@interface _AMiPhoto5PrintSettings : SBObject
-(void)closeSaving:(int)arg1 savingIn:(id)arg2 ;
-(void)delete;
-(void)duplicateTo:(id)arg1 withProperties:(id)arg2 ;
-(void)moveTo:(id)arg1 ;
-(void)quitSaving:(int)arg1 ;
-(int)copies;
-(void)setCopies:(int)arg1 ;
-(char)collating;
-(void)setCollating:(char)arg1 ;
-(int)startingPage;
-(void)setStartingPage:(int)arg1 ;
-(int)endingPage;
-(void)setEndingPage:(int)arg1 ;
-(int)pagesAcross;
-(void)setPagesAcross:(int)arg1 ;
-(int)pagesDown;
-(void)setPagesDown:(int)arg1 ;
-(id)requestedPrintTime;
-(void)setRequestedPrintTime:(id)arg1 ;
-(int)errorHandling;
-(void)setErrorHandling:(int)arg1 ;
-(id)faxNumber;
-(void)setFaxNumber:(id)arg1 ;
-(id)targetPrinter;
-(void)setTargetPrinter:(id)arg1 ;
-(void)duplicateTo:(id)arg1 ;
-(void)addTo:(id)arg1 ;
-(void)removeFrom:(id)arg1 ;
-(void)assignKeywordString:(id)arg1 ;
-(void)emptyTrash;
-(void)newAlbumName:(id)arg1 ;
-(void)stopSlideshow;
-(void)saveAs:(id)arg1 in_:(id)arg2 ;
-(void)importFrom:(id)arg1 to:(id)arg2 ;
-(void)startSlideshowUsingAlbum:(id)arg1 ;
-(void)select;
-(char)exists;
@end

