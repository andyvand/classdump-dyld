/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUndoManager, NSMutableArray;

@interface ADUndoManager : NSObject {

	NSUndoManager* _undoMan;
	NSMutableArray* _undoGroupRequests;
	NSMutableArray* _redoGroupRequests;

}
-(void)beginUndoGroupingForRequest:(id)arg1 ;
-(id)prepareInvocationWithTarget:(id)arg1 ;
-(void)clearUndoStack;
-(id)underlyingUndoManager;
-(id)init;
-(void)undo;
-(void)redo;
-(void)endUndoGrouping;
@end
