/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:34 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OSAKit/OSAKit-Structs.h>
#import <AppKit/NSBrowserCell.h>

@class NSDictionary, OSADefinition;

@interface OSABrowserCell : NSBrowserCell {

	NSDictionary* _item;
	OSADefinition* _definition;

}
-(void)setDefinition:(id)arg1 ;
-(void)dealloc;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(id)item;
-(void)setItem:(id)arg1 ;
-(id)definition;
@end

