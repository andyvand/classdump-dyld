/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:26 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSInputServiceProvider.h>
#import <AppKit/NSInputServerMouseTracker.h>

@class NSString;

@interface NSInputServer : NSObject <NSInputServiceProvider, NSInputServerMouseTracker> {

	NSString* _name;
	id _delegate;

}
-(void)dealloc;
-(id)description;
-(void)terminate:(id)arg1 ;
-(char)canBeDisabled;
-(char)wantsToInterpretAllKeystrokes;
-(char)wantsToDelayTextChangeNotifications;
-(char)wantsToHandleMouseEvents;
-(char)mouseDownOnCharacterIndex:(unsigned long long)arg1 atCoordinate:(CGPoint)arg2 withModifier:(unsigned long long)arg3 client:(id)arg4 ;
-(char)mouseDraggedOnCharacterIndex:(unsigned long long)arg1 atCoordinate:(CGPoint)arg2 withModifier:(unsigned long long)arg3 client:(id)arg4 ;
-(void)mouseUpOnCharacterIndex:(unsigned long long)arg1 atCoordinate:(CGPoint)arg2 withModifier:(unsigned long long)arg3 client:(id)arg4 ;
-(id)initWithDelegate:(id)arg1 name:(id)arg2 ;
-(void)insertText:(id)arg1 client:(id)arg2 ;
-(void)doCommandBySelector:(SEL)arg1 client:(id)arg2 ;
-(void)markedTextAbandoned:(id)arg1 ;
-(void)markedTextSelectionChanged:(NSRange)arg1 client:(id)arg2 ;
-(void)inputClientBecomeActive:(id)arg1 ;
-(void)inputClientResignActive:(id)arg1 ;
-(void)inputClientEnabled:(id)arg1 ;
-(void)inputClientDisabled:(id)arg1 ;
-(void)activeConversationWillChange:(id)arg1 fromOldConversation:(long long)arg2 ;
-(void)activeConversationChanged:(id)arg1 toNewConversation:(long long)arg2 ;
-(void)setActivated:(char)arg1 sender:(id)arg2 ;
-(void)senderDidBecomeActive:(id)arg1 ;
-(void)senderDidResignActive:(id)arg1 ;
-(void)cancelInput:(id)arg1 conversation:(long long)arg2 ;
-(void)_inputClientChangedStatus:(id)arg1 inputClient:(id)arg2 ;
@end

