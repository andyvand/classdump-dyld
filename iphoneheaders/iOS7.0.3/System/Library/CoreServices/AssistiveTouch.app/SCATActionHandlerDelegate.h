/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:38:34 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATActionHandlerDelegate <NSObject>
@required
-(BOOL)actionHandler:(id)arg1 shouldActImmediatelyOnActionCount:(unsigned)arg2;
-(void)actionHandlerDidFireAction:(id)arg1;
-(id)focusContextForActionHandler:(id)arg1;
-(void)actionHandlerDidCancelPendingAction:(id)arg1;
@end
