/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/_NSDragManager.h>

@class NSDraggingSession;

@interface NSCoreDragManager : _NSDragManager {

	NSDraggingSession* _dragSession;
	OpaqueCoreDragHandlerRef applicationHandlerRef;

}
+(void)doCommandBySelector:(SEL)arg1 ;
+(void)insertText:(id)arg1 ;
-(id)draggingSessionWithSequenceNumber:(long long)arg1 ;
-(id)_dragLocalSource;
-(id)_alternateDragSource;
-(void)registerForCompletionOfDrag:(void*)arg1 ;
-(void)_setAlternateDragSource:(id)arg1 ;
-(void)_dragUntilMouseUp:(id)arg1 accepted:(char*)arg2 ;
-(int)registerDragTypes:(id)arg1 forWindow:(id)arg2 ;
-(char)unregisterDragTypesForWindow:(id)arg1 ;
-(void)slideImage:(id)arg1 from:(CGPoint)arg2 to:(CGPoint)arg3 ;
-(id)beginDraggingSessionWithItems:(id)arg1 fromWindow:(id)arg2 withClipRect:(CGRect)arg3 event:(id)arg4 source:(id)arg5 ;
-(void)dragImage:(id)arg1 fromWindow:(id)arg2 at:(CGPoint)arg3 offset:(CGSize)arg4 event:(id)arg5 pasteboard:(id)arg6 source:(id)arg7 slideBack:(char)arg8 ;
@end

