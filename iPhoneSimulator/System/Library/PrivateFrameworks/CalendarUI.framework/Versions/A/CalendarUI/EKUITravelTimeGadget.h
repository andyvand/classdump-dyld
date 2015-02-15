/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUILabeledGadget.h>

@class EKUIPopUpButton, NSMutableDictionary, NSMutableSet, NSSet, NSString, CalLocation;

@interface EKUITravelTimeGadget : EKUILabeledGadget {

	EKUIPopUpButton* _popUpButton;
	NSMutableDictionary* _validRoutes;
	NSMutableSet* _currentlyCalculatingRoutes;
	NSMutableSet* _errorRoutes;
	NSSet* _supportedRouteTypes;
	long long _selectedDuration;
	NSString* _lastEventIdentifier;
	NSString* _lastLocation;
	CalLocation* _startLocation;

}

@property (retain) EKUIPopUpButton * popUpButton;                          //@synthesize popUpButton=_popUpButton - In the implementation block
@property (retain) NSMutableDictionary * validRoutes;                      //@synthesize validRoutes=_validRoutes - In the implementation block
@property (retain) NSMutableSet * currentlyCalculatingRoutes;              //@synthesize currentlyCalculatingRoutes=_currentlyCalculatingRoutes - In the implementation block
@property (retain) NSMutableSet * errorRoutes;                             //@synthesize errorRoutes=_errorRoutes - In the implementation block
@property (retain) NSSet * supportedRouteTypes;                            //@synthesize supportedRouteTypes=_supportedRouteTypes - In the implementation block
@property (assign) long long selectedDuration;                             //@synthesize selectedDuration=_selectedDuration - In the implementation block
@property (copy) NSString * lastEventIdentifier;                           //@synthesize lastEventIdentifier=_lastEventIdentifier - In the implementation block
@property (retain) NSString * lastLocation;                                //@synthesize lastLocation=_lastLocation - In the implementation block
@property (retain) CalLocation * startLocation;                            //@synthesize startLocation=_startLocation - In the implementation block
+(id)interestedChangeKeys;
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(char)needsExpansion;
-(void)updateWithChanges:(id)arg1 ;
-(id)labelString;
-(double)pixelsBetweenLabelAndControl;
-(void)popUpButtonClicked:(id)arg1 ;
-(EKUIPopUpButton *)popUpButton;
-(NSString *)lastEventIdentifier;
-(NSMutableDictionary *)validRoutes;
-(NSMutableSet *)currentlyCalculatingRoutes;
-(NSMutableSet *)errorRoutes;
-(void)setLastEventIdentifier:(NSString *)arg1 ;
-(void)setSelectedDuration:(long long)arg1 ;
-(void)_populatePopUpButton;
-(id)_menuItemWithDuration:(long long)arg1 andTitle:(id)arg2 ;
-(void)_addCalculatingSectionIfNeeded;
-(void)_addCustomItemIfNeeded;
-(void)showCustomTravelTimePicker:(id)arg1 ;
-(long long)selectedDuration;
-(id)_localizeTravelTimeChoiceStringWithDuration:(double)arg1 fromLocation:(id)arg2 includeLocationDescription:(char)arg3 ;
-(id)_imageForRouteType:(id)arg1 ;
-(void)durationChosen:(id)arg1 ;
-(void)_calculateTravelTime;
-(CalLocation *)startLocation;
-(id)_findEventStartLocation;
-(void)setStartLocation:(CalLocation *)arg1 ;
-(NSSet *)supportedRouteTypes;
-(void)_asyncUpdateTravelTimeMenuWithResults:(id)arg1 ;
-(void)setPopUpButton:(EKUIPopUpButton *)arg1 ;
-(void)setValidRoutes:(NSMutableDictionary *)arg1 ;
-(void)setCurrentlyCalculatingRoutes:(NSMutableSet *)arg1 ;
-(void)setErrorRoutes:(NSMutableSet *)arg1 ;
-(void)setSupportedRouteTypes:(NSSet *)arg1 ;
-(NSString *)lastLocation;
-(void)setLastLocation:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEditable;
-(double)baselineOffset;
@end

