/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSView;

@interface _NSMirrorDocumentView : NSView {

	NSView* _documentView;

}

@property (retain) NSView * associatedDocumentView; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setAssociatedDocumentView:(NSView *)arg1 ;
-(void)documentViewNeedsDisplayInRect:(id)arg1 ;
-(NSView *)associatedDocumentView;
-(CGRect)_expandAndConstrainRect:(CGRect)arg1 byAmount:(CGSize)arg2 ;
@end

