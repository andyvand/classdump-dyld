/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSDInteractiveCanvasController, NSMutableArray;

@interface THWAutoplayController : NSObject {

	char _tornDown;
	char _inTwoPageMode;
	TSDInteractiveCanvasController* _interactiveCanvasController;
	unsigned long long _currentPageIndex;
	NSMutableArray* _autoplayableReps;
	unsigned long long _generationCount;

}

@property (nonatomic,readonly) double stopScrollingDelay; 
@property (nonatomic,retain) TSDInteractiveCanvasController * interactiveCanvasController;              //@synthesize interactiveCanvasController=_interactiveCanvasController - In the implementation block
@property (assign,nonatomic) char tornDown;                                                             //@synthesize tornDown=_tornDown - In the implementation block
@property (assign,nonatomic) unsigned long long currentPageIndex;                                       //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * autoplayableReps;                                         //@synthesize autoplayableReps=_autoplayableReps - In the implementation block
@property (assign,nonatomic) char inTwoPageMode;                                                        //@synthesize inTwoPageMode=_inTwoPageMode - In the implementation block
@property (nonatomic,readonly) unsigned long long generationCount;                                      //@synthesize generationCount=_generationCount - In the implementation block
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)autoplayableReps;
-(void)setAutoplayableReps:(NSMutableArray *)arg1 ;
-(void)setInTwoPageMode:(char)arg1 ;
-(char)inTwoPageMode;
-(void)p_autoplayStop;
-(void)setInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1 ;
-(TSDInteractiveCanvasController *)interactiveCanvasController;
-(void)handleNotificationVantageWillChange:(id)arg1 ;
-(void)handleNotificationVantageDidChange:(id)arg1 ;
-(id)p_documentNavigatorFromNotification:(id)arg1 ;
-(char)p_isInTwoPageMode:(id)arg1 ;
-(void)p_unpackNotification:(id)arg1 outCurrentAbsolutePageIndex:(unsigned long long*)arg2 outTopLevelReps:(id*)arg3 ;
-(void)p_startAutoplayableDescendantsOfReps:(id)arg1 ;
-(void)p_recursivelyAddAutoplayableRepsForRep:(id)arg1 ;
-(double)stopScrollingDelay;
-(void)p_autoplayStart;
-(void)setTornDown:(char)arg1 ;
-(char)tornDown;
-(unsigned long long)generationCount;
-(unsigned long long)currentPageIndex;
-(void)teardown;
-(id)init;
-(void)dealloc;
@end
