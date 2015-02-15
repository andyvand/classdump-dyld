/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalUIControlResponder <NSTextFieldDelegate>
@optional
-(void)controlDidBecomeFirstResponder:(id)arg1;
-(void)controlDidFinishEditing:(id)arg1;
-(id)iconForLocationSuggestion:(id)arg1 selected:(char)arg2;
-(id)iconForLocationSelection:(id)arg1 selected:(char)arg2;
-(void)locationDidGeocode:(id)arg1 error:(id)arg2;
-(void)userDidDismissFromLocationField;
-(void)controlTextDidChange:(id)arg1;

@required
-(id)calAddressWrapperForLocation:(id)arg1;
-(void)controlDidSelectLocationObject:(id)arg1;
-(void)controlDidDeleteLocationObject:(id)arg1;
-(void)controlDidReceiveServerResults:(id)arg1;

@end

