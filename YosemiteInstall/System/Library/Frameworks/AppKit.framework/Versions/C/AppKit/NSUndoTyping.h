/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSUndoTextOperation.h>

@class NSMutableAttributedString;

@interface NSUndoTyping : NSUndoTextOperation {

	NSRange _replacementRange;
	NSMutableAttributedString* _attributedString;

}
-(void)dealloc;
-(void)undoRedo:(id)arg1 ;
-(char)isSupportingCoalescing;
-(id)initWithAffectedRange:(NSRange)arg1 layoutManager:(id)arg2 undoManager:(id)arg3 replacementRange:(NSRange)arg4 ;
-(char)coalesceAffectedRange:(NSRange)arg1 replacementRange:(NSRange)arg2 selectedRange:(NSRange)arg3 text:(id)arg4 ;
@end
