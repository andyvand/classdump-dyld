/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSUndoTextOperation.h>

@class _NSAttributeRun;

@interface NSUndoSetAttributes : NSUndoTextOperation {

	_NSAttributeRun* _attributes;

}
-(void)dealloc;
-(void)undoRedo:(id)arg1 ;
-(id)initWithAffectedRange:(NSRange)arg1 layoutManager:(id)arg2 undoManager:(id)arg3 ;
@end

