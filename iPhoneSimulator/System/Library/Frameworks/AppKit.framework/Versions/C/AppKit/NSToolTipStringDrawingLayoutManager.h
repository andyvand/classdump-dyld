/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:28 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSDictionary, NSLayoutManager;

@interface NSToolTipStringDrawingLayoutManager : NSObject {

	NSDictionary* _wrappingAttributes;
	NSLayoutManager* _layoutManager;

}

@property (retain,readonly) NSDictionary * wrappingAttributes;              //@synthesize wrappingAttributes=_wrappingAttributes - In the implementation block
+(CGSize)sizeForDisplayingAttributedString:(id*)arg1 ;
+(id)sharedToolTipStringDrawingLayoutManager;
-(void)dealloc;
-(id)_wrappingAttributes;
-(CGSize)_sizeWithSize:(CGSize)arg1 attributedString:(id*)arg2 ;
-(NSDictionary *)wrappingAttributes;
@end

