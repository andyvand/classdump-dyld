/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSUndoManager, NSLayoutManager;

@interface NSUndoTextOperation : NSObject {

	NSRange _affectedRange;
	NSUndoManager* _undoManager;
	NSLayoutManager* _layoutManager;

}

@property (assign,nonatomic) NSRange affectedRange;                    //@synthesize affectedRange=_affectedRange - In the implementation block
@property (assign,nonatomic) NSUndoManager * undoManager;              //@synthesize undoManager=_undoManager - In the implementation block
-(void)dealloc;
-(NSUndoManager *)undoManager;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(id)firstTextViewForTextStorage:(id)arg1 ;
-(void)undoRedo:(id)arg1 ;
-(id)initWithAffectedRange:(NSRange)arg1 layoutManager:(id)arg2 undoManager:(id)arg3 ;
-(char)isSupportingCoalescing;
-(NSRange)affectedRange;
-(void)setAffectedRange:(NSRange)arg1 ;
@end

