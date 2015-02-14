/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Social.framework/Versions/A/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol SLXShareLocationControllerDelegate;
@class NSArray, NSTrackingArea, NSButton, NSPopUpButton;

@interface SLXShareLocationController : NSViewController {

	NSArray* _locations;
	long long _status;
	long long _currentLocationIndex;
	/*^block*/id _updateLocationsBlock;
	id<SLXShareLocationControllerDelegate> _delegate;
	NSTrackingArea* _buttonTrackingArea;
	NSButton* locationButton;
	NSPopUpButton* locationsPopupButton;

}

@property (copy) NSArray * locations; 
@property (readonly) id currentLocation; 
@property (assign) char enabled; 
@property (retain) id<SLXShareLocationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy) id updateLocationsBlock;                                        //@synthesize updateLocationsBlock=_updateLocationsBlock - In the implementation block
@property (assign) long long status;                                             //@synthesize status=_status - In the implementation block
@property (assign) long long currentLocationIndex;                               //@synthesize currentLocationIndex=_currentLocationIndex - In the implementation block
+(id)keyPathsForValuesAffectingCurrentLocation;
+(id)keyPathsForValuesAffectingCurrentLocationDisplayName;
-(void)setLocations:(NSArray *)arg1 ;
-(char)enabled;
-(char)isTextDirectionRTL;
-(void)setUpdateLocationsBlock:(id)arg1 ;
-(void)_updateLocationsPopup;
-(id)_titleForLocation:(id)arg1 ;
-(void)_updateLocationsPopupWidth;
-(void)_showAndUpdateArrowImage;
-(void)_showRemoveImage;
-(void)_removeTrackingAreaForButton;
-(void)_addTrackingAreaForButton;
-(long long)currentLocationIndex;
-(id)updateLocationsBlock;
-(void)updateFailedAndIsUnavailable:(char)arg1 ;
-(id)currentLocationDisplayName;
-(void)locationClicked:(id)arg1 ;
-(void)locationPopupChanged:(id)arg1 ;
-(void)setCurrentLocationIndex:(long long)arg1 ;
-(id)currentLocation;
-(id)initWithParentView:(id)arg1 ;
-(void)setDelegate:(id<SLXShareLocationControllerDelegate>)arg1 ;
-(void)invalidate;
-(void)setEnabled:(char)arg1 ;
-(id<SLXShareLocationControllerDelegate>)delegate;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(long long)status;
-(NSArray *)locations;
-(void)setStatus:(long long)arg1 ;
@end

