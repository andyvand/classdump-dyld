/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol THWReviewQuestionHosting <NSObject>
@required
-(void)reviewQuestion:(id)arg1 selectChoice:(unsigned long long)arg2;
-(void)reviewQuestionInvalidateLayers:(id)arg1;
-(id)reviewQuestionDraggingHostView:(id)arg1;
-(int)reviewQuestionInitialState:(id)arg1;
-(void)reviewQuestionDidUpdateState:(id)arg1;
-(id)reviewQuestionResponseController:(id)arg1;
-(int)reviewQuestion:(id)arg1 radioStateForChoice:(unsigned long long)arg2 pressed:(char)arg3;
-(id)reviewQuestion:(id)arg1 cachedImageNamed:(id)arg2;
-(unsigned long long)reviewQuestion:(id)arg1 targetForPlacard:(unsigned long long)arg2;
-(unsigned long long)reviewQuestion:(id)arg1 placardForTarget:(unsigned long long)arg2;
-(char)reviewQuestionIsCurrentlyInView:(id)arg1;
-(void)reviewQuestion:(id)arg1 unassociateTargets:(id)arg2;
-(void)reviewQuestion:(id)arg1 associatePlacard:(unsigned long long)arg2 withTarget:(unsigned long long)arg3;

@end

