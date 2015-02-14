/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUIGadget.h>
#import <CalendarUI/EKUIAttendeesViewController.h>
#import <CalendarUI/CalUIControlResponder.h>

@class NSMutableDictionary, CalUILocationDelegate, CalUILocationFieldContainer, EKUIAttendeeFieldDelegate, NSString;

@interface EKUILocationGadget : EKUIGadget <EKUIAttendeesViewController, CalUIControlResponder> {

	char _forceUpdate;
	char _isSaving;
	NSMutableDictionary* _searchResults;
	NSMutableDictionary* _addressToSearchResults;
	CalUILocationDelegate* _locationDelegate;
	CalUILocationFieldContainer* _locationFieldContainer;
	EKUIAttendeeFieldDelegate* _fieldDelegate;
	id _lastEventID;

}

@property (retain) NSMutableDictionary * searchResults;                               //@synthesize searchResults=_searchResults - In the implementation block
@property (retain) NSMutableDictionary * addressToSearchResults;                      //@synthesize addressToSearchResults=_addressToSearchResults - In the implementation block
@property (retain) CalUILocationDelegate * locationDelegate;                          //@synthesize locationDelegate=_locationDelegate - In the implementation block
@property (retain) CalUILocationFieldContainer * locationFieldContainer;              //@synthesize locationFieldContainer=_locationFieldContainer - In the implementation block
@property (retain) EKUIAttendeeFieldDelegate * fieldDelegate;                         //@synthesize fieldDelegate=_fieldDelegate - In the implementation block
@property (assign) char forceUpdate;                                                  //@synthesize forceUpdate=_forceUpdate - In the implementation block
@property (retain) id lastEventID;                                                    //@synthesize lastEventID=_lastEventID - In the implementation block
@property (assign) char isSaving;                                                     //@synthesize isSaving=_isSaving - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(char)hasContent;
-(char)isSaving;
-(double)maxHeight;
-(char)isFreeBusySupported;
-(void)setSearchResults:(NSMutableDictionary *)arg1 ;
-(void)setAddressToSearchResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)searchResults;
-(NSMutableDictionary *)addressToSearchResults;
-(void)updateFreeBusyTo:(int)arg1 forItemWithCUAddress:(id)arg2 ;
-(char)updateAttendeesFromPasteboard:(id)arg1 ;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(double)horizontalInset;
-(id)claimedPboardTypes;
-(void)updateWithChanges:(id)arg1 ;
-(void)setLocationDelegate:(CalUILocationDelegate *)arg1 ;
-(CalUILocationDelegate *)locationDelegate;
-(CalUILocationFieldContainer *)locationFieldContainer;
-(void)setLocationFieldContainer:(CalUILocationFieldContainer *)arg1 ;
-(void)setFieldDelegate:(EKUIAttendeeFieldDelegate *)arg1 ;
-(EKUIAttendeeFieldDelegate *)fieldDelegate;
-(void)_saveLocationAsStructuredLocation:(id)arg1 onEvent:(id)arg2 ;
-(void)setIsSaving:(char)arg1 ;
-(void)locationDidGeocode:(id)arg1 forEvent:(id)arg2 string:(id)arg3 error:(id)arg4 ;
-(id)representedObjectsFromPasteboard:(id)arg1 ;
-(void)_saveLocationAsParticipant:(id)arg1 ;
-(void)_saveStructuredLocation;
-(void)_saveCompleteChangeIfNotSaving;
-(void)_geocodeLocationString:(id)arg1 ;
-(id)calAddressWrapperForLocation:(id)arg1 ;
-(id)iconForCalAddressWrapper:(id)arg1 selected:(char)arg2 ;
-(void)controlDidSelectLocationObject:(id)arg1 ;
-(void)controlDidDeleteLocationObject:(id)arg1 ;
-(void)controlDidReceiveServerResults:(id)arg1 ;
-(void)controlDidFinishEditing:(id)arg1 ;
-(id)iconForLocationSuggestion:(id)arg1 selected:(char)arg2 ;
-(id)iconForLocationSelection:(id)arg1 selected:(char)arg2 ;
-(void)locationDidGeocode:(id)arg1 error:(id)arg2 ;
-(void)userDidDismissFromLocationField;
-(id)iconForCalAutocompleteAttendee:(id)arg1 selected:(char)arg2 ;
-(void)setForceUpdate:(char)arg1 ;
-(id)lastEventID;
-(void)setLastEventID:(id)arg1 ;
-(char)forceUpdate;
-(char)performDragOperation:(id)arg1 ;
-(id)textField;
@end

