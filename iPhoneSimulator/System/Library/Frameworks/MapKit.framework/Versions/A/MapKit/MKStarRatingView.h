/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:06 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>

@class NSImage, NSMutableArray;

@interface MKStarRatingView : NSView {

	double _rating;
	long long _numLevels;
	double _padding;
	char _highlighted;
	NSImage* _fullStarImage;
	NSImage* _halfStarImage;
	NSImage* _emptyStarImage;
	NSImage* _fullStarHighlightedImage;
	NSImage* _halfStarHighlightedImage;
	NSImage* _emptyStarHighlightedImage;
	NSMutableArray* _ratingViews;
	long long _numReviews;

}

@property (assign,nonatomic) long long numberOfRatingLevels;                     //@synthesize numLevels=_numLevels - In the implementation block
@property (assign,nonatomic) double rating;                                      //@synthesize rating=_rating - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) NSImage * fullStarImage;                            //@synthesize fullStarImage=_fullStarImage - In the implementation block
@property (nonatomic,retain) NSImage * halfStarImage;                            //@synthesize halfStarImage=_halfStarImage - In the implementation block
@property (nonatomic,retain) NSImage * emptyStarImage;                           //@synthesize emptyStarImage=_emptyStarImage - In the implementation block
@property (nonatomic,retain) NSImage * fullStarHighlightedImage;                 //@synthesize fullStarHighlightedImage=_fullStarHighlightedImage - In the implementation block
@property (nonatomic,retain) NSImage * halfStarHighlightedImage;                 //@synthesize halfStarHighlightedImage=_halfStarHighlightedImage - In the implementation block
@property (nonatomic,retain) NSImage * emptyStarHighlightedImage;                //@synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage - In the implementation block
-(void)commonInit;
-(double)rating;
-(void)setNumberOfRatingLevels:(long long)arg1 ;
-(void)_setStarStyle:(long long)arg1 ;
-(void)setFullStarImage:(NSImage *)arg1 ;
-(void)setHalfStarImage:(NSImage *)arg1 ;
-(void)setEmptyStarImage:(NSImage *)arg1 ;
-(void)setFullStarHighlightedImage:(NSImage *)arg1 ;
-(void)setHalfStarHighlightedImage:(NSImage *)arg1 ;
-(void)setEmptyStarHighlightedImage:(NSImage *)arg1 ;
-(long long)numberOfRatingLevels;
-(void)_layoutStarViewsCreatingIfNeeded:(char)arg1 ;
-(NSImage *)fullStarImage;
-(NSImage *)halfStarImage;
-(NSImage *)emptyStarImage;
-(NSImage *)fullStarHighlightedImage;
-(NSImage *)halfStarHighlightedImage;
-(NSImage *)emptyStarHighlightedImage;
-(void)setPadding:(double)arg1 ;
-(void)setRating:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layout;
-(void)sizeToFit;
-(char)isHighlighted;
-(void)setHighlighted:(char)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)viewDidChangeBackingProperties;
@end

