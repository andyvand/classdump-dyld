/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/BrowserKit.framework/BrowserKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BrowserKit/BrowserKit-Structs.h>
#import <ProKit/NSProButtonCell.h>

@class NSProRenditionKey, NSString;

@interface BKThemeFacetCell : NSProButtonCell {

	NSProRenditionKey* _renditionKey;
	NSString* _badge;
	char _parentHighlighted;
	char _rollover;

}

@property (retain) NSProRenditionKey * renditionKey;                        //@synthesize renditionKey=_renditionKey - In the implementation block
@property (copy) NSString * badge;                                          //@synthesize badge=_badge - In the implementation block
@property (getter=isParentHighlighted) char parentHighlighted;              //@synthesize parentHighlighted=_parentHighlighted - In the implementation block
@property (getter=isRollover) char rollover;                                //@synthesize rollover=_rollover - In the implementation block
+(char)prefersTrackingUntilMouseUp;
-(void)setParentHighlighted:(char)arg1 ;
-(void)setRollover:(char)arg1 ;
-(char)isParentHighlighted;
-(char)isRollover;
-(void)updateRenditionKey:(id)arg1 getFocus:(char*)arg2 userInfo:(id)arg3 ;
-(NSString *)badge;
-(void)setBadge:(NSString *)arg1 ;
-(id)init;
-(CGSize)cellSize;
-(void)setRenditionKey:(NSProRenditionKey *)arg1 ;
-(NSProRenditionKey *)renditionKey;
@end
