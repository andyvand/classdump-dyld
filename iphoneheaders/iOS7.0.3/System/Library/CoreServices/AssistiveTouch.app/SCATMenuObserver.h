/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATMenuObserver <NSObject>
@optional
-(void)menuWillAppear:(id)arg1;
-(void)menuDidAppear:(id)arg1;
-(void)menuWillDisappear:(id)arg1;
-(void)menuDidDisappear:(id)arg1;
-(void)menuWillBeginTransition:(id)arg1;
-(void)menuDidFinishTransition:(id)arg1;
-(void)menuDidUpdateTipObject:(id)arg1;
-(void)menu:(id)arg1 willMoveToPosition:(id)arg2;
-(void)menu:(id)arg1 didMoveToPosition:(id)arg2;
-(void)menuDidUpdateMenuSheets:(id)arg1;
@end
