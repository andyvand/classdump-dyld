/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/TopBarTitleView.h>

@class MNRoute, NSString;

@interface RouteStartStepView : TopBarTitleView {

	unsigned _alternateRoutesCount;
	unsigned _selectedAlternateRouteIndex;
	MNRoute* _selectedRoute;
	NSString* _destinationName;

}

@property (assign,nonatomic) unsigned alternateRoutesCount;              //@synthesize alternateRoutesCount=_alternateRoutesCount - In the implementation block
@property (nonatomic,retain) NSString * destinationName;                 //@synthesize destinationName=_destinationName - In the implementation block
-(void)setAlternateRoutesCount:(unsigned)arg1 ;
-(void)setRoute:(id)arg1 withIndex:(unsigned)arg2 destinationName:(id)arg3 ;
-(unsigned)alternateRoutesCount;
-(void)setDestinationName:(id)arg1 ;
-(id)destinationName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
@end
