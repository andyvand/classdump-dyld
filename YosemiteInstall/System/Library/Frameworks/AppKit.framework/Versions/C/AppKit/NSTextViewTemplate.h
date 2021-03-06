/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSViewTemplate.h>

@class NSColor, NSDictionary;

@interface NSTextViewTemplate : NSViewTemplate {

	id _contents;
	NSColor* _backgroundColor;
	NSDictionary* _selectedTextAttributes;
	NSColor* _insertionPointColor;
	CGSize _containerSize;
	CGSize _minSize;
	CGSize _maxSize;
	id _delegate;
	struct {
		unsigned drawsBackground : 1;
		unsigned selectable : 1;
		unsigned editable : 1;
		unsigned richText : 1;
		unsigned importsGraphics : 1;
		unsigned horizontallyResizable : 1;
		unsigned verticallyResizable : 1;
		unsigned fieldEditor : 1;
		unsigned usesFontPanel : 1;
		unsigned rulerVisible : 1;
		unsigned containerTracksWidth : 1;
		unsigned containerTracksHeight : 1;
		unsigned usesRuler : 1;
		unsigned allowsUndo : 1;
		unsigned _pad : 18;
	}  _tvtFlags;
	NSDictionary* _typingAttrs;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithView:(id)arg1 className:(id)arg2 ;
-(id)createRealObject;
@end

