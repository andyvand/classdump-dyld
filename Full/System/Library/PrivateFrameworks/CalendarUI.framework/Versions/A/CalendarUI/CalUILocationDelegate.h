/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/NSTokenFieldDelegate.h>
#import <CalendarUI/NSTextFieldDelegate.h>
#import <CalendarUI/CalUIPlacemarkRequesterProtocol.h>
#import <CalendarUI/CalAutoCompleteDelegate.h>
#import <CalendarUI/CalUILocationSearchManagerDelegate.h>
#import <CalendarUI/MKSearchCompleterDelegate.h>

@protocol EKProtocolCalendarSource, CalUIControlResponder;
@class NSObject, CalUILocationFieldContainer, CalLocation, CalUILocation, CalAutoCompleteOperation, CLPlacemark, CalUILocationCompletionController, NSString, NSMutableArray, CalUILocationSearchManager, MKLocalSearch, MKLocalSearchCompleter, NSFont;

@interface CalUILocationDelegate : NSObject <NSTokenFieldDelegate, NSTextFieldDelegate, CalUIPlacemarkRequesterProtocol, CalAutoCompleteDelegate, CalUILocationSearchManagerDelegate, MKSearchCompleterDelegate> {

	char _shouldPopulateCurrentLocationWhenAvailable;
	char _searching;
	char _isCommitting;
	char _waitingOnCurrentLocationBeforeLaunchingLocalSearch;
	char _currentLocationLookupFailure;
	char _displayLocationIcon;
	char _displayLocationDistances;
	char _includeLocalSearchResults;
	char _includeCurrentLocation;
	char _includeHomeWork;
	id<EKProtocolCalendarSource> _serverSearchSource;
	NSObject*<CalUIControlResponder> _controlResponder;
	CalUILocationFieldContainer* _locationFieldContainer;
	CalLocation* _lastLocation;
	double _lastLocationAge;
	CalUILocation* __structuredLocation;
	CalAutoCompleteOperation* _acOperation;
	CLPlacemark* _currentLocationPlacemark;
	CalUILocationCompletionController* _completionController;
	NSString* _currentSearchString;
	NSMutableArray* _allLocations;
	NSMutableArray* _addressBookLocations;
	NSMutableArray* _customLocations;
	NSMutableArray* _calDavLocations;
	NSMutableArray* _localSearchLocations;
	NSMutableArray* _suggestionRows;
	CalUILocationSearchManager* _searchManager;
	double _searchStartTime;
	MKLocalSearch* _localSearch;
	MKLocalSearchCompleter* _localAutocomplete;
	NSFont* _controlFont;

}

@property (__weak) NSObject*<CalUIControlResponder> controlResponder;                     //@synthesize controlResponder=_controlResponder - In the implementation block
@property (retain) CalUILocationFieldContainer * locationFieldContainer;                  //@synthesize locationFieldContainer=_locationFieldContainer - In the implementation block
@property (retain) id<EKProtocolCalendarSource> serverSearchSource;                       //@synthesize serverSearchSource=_serverSearchSource - In the implementation block
@property (retain) CalLocation * lastLocation;                                            //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign) double lastLocationAge;                                                //@synthesize lastLocationAge=_lastLocationAge - In the implementation block
@property (assign) char shouldPopulateCurrentLocationWhenAvailable;                       //@synthesize shouldPopulateCurrentLocationWhenAvailable=_shouldPopulateCurrentLocationWhenAvailable - In the implementation block
@property (retain) CalUILocation * _structuredLocation;                                   //@synthesize _structuredLocation=__structuredLocation - In the implementation block
@property (retain) CalAutoCompleteOperation * acOperation;                                //@synthesize acOperation=_acOperation - In the implementation block
@property (retain) CLPlacemark * currentLocationPlacemark;                                //@synthesize currentLocationPlacemark=_currentLocationPlacemark - In the implementation block
@property (retain) CalUILocationCompletionController * completionController;              //@synthesize completionController=_completionController - In the implementation block
@property (retain) NSString * currentSearchString;                                        //@synthesize currentSearchString=_currentSearchString - In the implementation block
@property (retain) NSMutableArray * allLocations;                                         //@synthesize allLocations=_allLocations - In the implementation block
@property (retain) NSMutableArray * addressBookLocations;                                 //@synthesize addressBookLocations=_addressBookLocations - In the implementation block
@property (retain) NSMutableArray * customLocations;                                      //@synthesize customLocations=_customLocations - In the implementation block
@property (retain) NSMutableArray * calDavLocations;                                      //@synthesize calDavLocations=_calDavLocations - In the implementation block
@property (retain) NSMutableArray * localSearchLocations;                                 //@synthesize localSearchLocations=_localSearchLocations - In the implementation block
@property (retain) NSMutableArray * suggestionRows;                                       //@synthesize suggestionRows=_suggestionRows - In the implementation block
@property (retain) CalUILocationSearchManager * searchManager;                            //@synthesize searchManager=_searchManager - In the implementation block
@property (assign) char searching;                                                        //@synthesize searching=_searching - In the implementation block
@property (assign) double searchStartTime;                                                //@synthesize searchStartTime=_searchStartTime - In the implementation block
@property (retain) MKLocalSearch * localSearch;                                           //@synthesize localSearch=_localSearch - In the implementation block
@property (retain) MKLocalSearchCompleter * localAutocomplete;                            //@synthesize localAutocomplete=_localAutocomplete - In the implementation block
@property (assign) char isCommitting;                                                     //@synthesize isCommitting=_isCommitting - In the implementation block
@property (assign) char waitingOnCurrentLocationBeforeLaunchingLocalSearch;               //@synthesize waitingOnCurrentLocationBeforeLaunchingLocalSearch=_waitingOnCurrentLocationBeforeLaunchingLocalSearch - In the implementation block
@property (assign) char currentLocationLookupFailure;                                     //@synthesize currentLocationLookupFailure=_currentLocationLookupFailure - In the implementation block
@property (assign) char displayLocationIcon;                                              //@synthesize displayLocationIcon=_displayLocationIcon - In the implementation block
@property (assign) char displayLocationDistances;                                         //@synthesize displayLocationDistances=_displayLocationDistances - In the implementation block
@property (assign) char includeLocalSearchResults;                                        //@synthesize includeLocalSearchResults=_includeLocalSearchResults - In the implementation block
@property (assign) char includeCurrentLocation;                                           //@synthesize includeCurrentLocation=_includeCurrentLocation - In the implementation block
@property (assign) char includeHomeWork;                                                  //@synthesize includeHomeWork=_includeHomeWork - In the implementation block
@property (retain) NSFont * controlFont;                                                  //@synthesize controlFont=_controlFont - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localSearchError;
+(id)invalidLocationError;
-(CalUILocationCompletionController *)completionController;
-(id)currentLocation;
-(CalAutoCompleteOperation *)acOperation;
-(void)setAcOperation:(CalAutoCompleteOperation *)arg1 ;
-(void)setIncludeLocalSearchResults:(char)arg1 ;
-(void)setIncludeCurrentLocation:(char)arg1 ;
-(void)setControlFont:(NSFont *)arg1 ;
-(id)initWithControlResponder:(id)arg1 withOptions:(id)arg2 ;
-(CalUILocationFieldContainer *)locationFieldContainer;
-(void)setLocationFieldContainer:(CalUILocationFieldContainer *)arg1 ;
-(void)setLastLocationAge:(double)arg1 ;
-(void)setServerSearchSource:(id<EKProtocolCalendarSource>)arg1 ;
-(id)currentControl;
-(void)calAddressWrapperDidUpdate:(id)arg1 ;
-(void)controlDidBecomeFirstResponder:(id)arg1 ;
-(id)iconForLocationSuggestion:(id)arg1 selected:(char)arg2 ;
-(id)iconForLocationSelection:(id)arg1 selected:(char)arg2 ;
-(void)setControlResponder:(NSObject*<CalUIControlResponder>)arg1 ;
-(void)setCompletionController:(CalUILocationCompletionController *)arg1 ;
-(void)setDisplayLocationIcon:(char)arg1 ;
-(void)setDisplayLocationDistances:(char)arg1 ;
-(char)includeLocalSearchResults;
-(char)includeCurrentLocation;
-(char)includeHomeWork;
-(void)setIncludeHomeWork:(char)arg1 ;
-(NSFont *)controlFont;
-(void)setAllLocations:(NSMutableArray *)arg1 ;
-(void)setCustomLocations:(NSMutableArray *)arg1 ;
-(void)setCalDavLocations:(NSMutableArray *)arg1 ;
-(void)setLocalSearchLocations:(NSMutableArray *)arg1 ;
-(void)setSuggestionRows:(NSMutableArray *)arg1 ;
-(void)setIsCommitting:(char)arg1 ;
-(void)setSearchManager:(CalUILocationSearchManager *)arg1 ;
-(CalUILocation *)_structuredLocation;
-(void)set_structuredLocation:(CalUILocation *)arg1 ;
-(NSString *)currentSearchString;
-(void)refreshLocations;
-(void)setCurrentLocationLookupFailure:(char)arg1 ;
-(void)displayLocationMatches;
-(char)waitingOnCurrentLocationBeforeLaunchingLocalSearch;
-(void)_waitingOnCurrentLocationTimedOut;
-(void)launchLocalAutocompleteForString:(id)arg1 ;
-(void)setWaitingOnCurrentLocationBeforeLaunchingLocalSearch:(char)arg1 ;
-(CLPlacemark *)currentLocationPlacemark;
-(CalUILocationSearchManager *)searchManager;
-(void)setCurrentLocationPlacemark:(CLPlacemark *)arg1 ;
-(void)currentLocationDidChange;
-(NSMutableArray *)suggestionRows;
-(NSMutableArray *)addressBookLocations;
-(NSMutableArray *)localSearchLocations;
-(NSMutableArray *)customLocations;
-(NSMutableArray *)calDavLocations;
-(void)setCurrentSearchString:(NSString *)arg1 ;
-(void)setSearching:(char)arg1 ;
-(MKLocalSearch *)localSearch;
-(void)setLocalSearch:(MKLocalSearch *)arg1 ;
-(void)setLocalAutocomplete:(MKLocalSearchCompleter *)arg1 ;
-(id)currentLocationString;
-(NSMutableArray *)allLocations;
-(id)_addressBookLocationsForMeCardMatchingString:(id)arg1 ;
-(void)setAddressBookLocations:(NSMutableArray *)arg1 ;
-(void)refreshSuggestionRowsWithCalDavLocations:(id)arg1 customLocations:(id)arg2 abLocations:(id)arg3 localSearchLocations:(id)arg4 currentLocation:(id)arg5 ;
-(void)handleLocalAutocompleteResultsForCompleter:(id)arg1 ;
-(double)searchStartTime;
-(void)stopProgressIndicator;
-(NSObject*<CalUIControlResponder>)controlResponder;
-(void)showLocationMatchesInTable;
-(void)setSearchStartTime:(double)arg1 ;
-(id<EKProtocolCalendarSource>)serverSearchSource;
-(void)launchServerSearchForString:(id)arg1 ;
-(id)addressBookLocationsForSearchString:(id)arg1 ;
-(char)currentLocationLookupFailure;
-(void)launchPlacemarkRequests;
-(void)_commitEnteredLocationIfNeeded;
-(void)updateCurrentLocation;
-(MKLocalSearchCompleter *)localAutocomplete;
-(double)lastLocationAge;
-(id)localSearchRequestWithSearchString:(id)arg1 ;
-(void)launchLocalSearchWithSearchRequest:(id)arg1 ;
-(void)handleLocalSearchResponse:(id)arg1 responseError:(id)arg2 ;
-(void)commitLocation:(id)arg1 ;
-(void)launchPlacemarkRequestForQueries:(id)arg1 ;
-(id)currentTypedCustomLocation;
-(id)locationForTableRow:(long long)arg1 ;
-(id)selectedLocation;
-(char)isCommitting;
-(void)selectLocationObject:(id)arg1 ;
-(void)commitEnteredLocation;
-(char)displayLocationIcon;
-(id)iconForLocationSelection:(id)arg1 ;
-(id)conferenceRoomCaption;
-(char)displayLocationDistances;
-(id)attributedStringTitleForLocation:(id)arg1 icon:(id)arg2 textColor:(id)arg3 ;
-(void)receiveRequestedPlacemarks:(id)arg1 tag:(id)arg2 ;
-(void)searchResultsShouldDisplayFromSearchManager:(id)arg1 ;
-(void)stopProgressIndicatorFromSearchManager:(id)arg1 ;
-(void)startProgressIndicatorFromSearchManager:(id)arg1 ;
-(void)completerWillUpdateResults:(id)arg1 ;
-(void)completerDidUpdateResults:(id)arg1 finished:(char)arg2 ;
-(void)completerDidFail:(id)arg1 error:(id)arg2 ;
-(void)completerWillAccessNetwork:(id)arg1 ;
-(void)completerDidAccessNetwork:(id)arg1 ;
-(void)setStructuredLocationWithString:(id)arg1 ;
-(void)controlDidResignFirstResponder:(id)arg1 ;
-(void)launchLocalSearchForString:(id)arg1 ;
-(void)commitSelectedLocation;
-(void)updateLocationIconForLocation:(id)arg1 ;
-(id)subtextForLocation:(id)arg1 ;
-(id)progressIndicatorKeyForRow:(long long)arg1 ;
-(id)iconForRow:(long long)arg1 selected:(char)arg2 ;
-(char)shouldPopulateCurrentLocationWhenAvailable;
-(void)setShouldPopulateCurrentLocationWhenAvailable:(char)arg1 ;
-(char)searching;
-(CalLocation *)lastLocation;
-(void)setLastLocation:(CalLocation *)arg1 ;
-(void)dealloc;
-(char)isEditable;
-(void)reset;
-(char)control:(id)arg1 textShouldBeginEditing:(id)arg2 ;
-(char)control:(id)arg1 textShouldEndEditing:(id)arg2 ;
-(char)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3 ;
-(void)controlTextDidBeginEditing:(id)arg1 ;
-(void)controlTextDidEndEditing:(id)arg1 ;
-(void)controlTextDidChange:(id)arg1 ;
-(id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2 ;
-(char)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2 ;
-(id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3 ;
-(id)structuredLocation;
-(void)setStructuredLocation:(id)arg1 ;
-(void)startedAutoComplete:(id)arg1 ;
-(void)finishedAutoComplete:(id)arg1 ;
-(void)cancelSearch;
@end

