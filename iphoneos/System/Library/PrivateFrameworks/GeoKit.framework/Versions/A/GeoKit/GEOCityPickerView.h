/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@protocol GEOCityPickerViewDelegate;
@class GEOCityPickerViewPrivController, GEOCity, NSObject, NSComboBox, NSButton, NSProgressIndicator;

@interface GEOCityPickerView : NSView {

	GEOCityPickerViewPrivController* viewPrivController;
	GEOCity* selectedCity;
	char enabled;
	NSObject*<GEOCityPickerViewDelegate> delegate;
	char isUIBounded;
	NSComboBox* comboBox;
	NSButton* timeZoneButton;
	NSProgressIndicator* progressIndicator;

}

@property (nonatomic,retain) GEOCity * selectedCity; 
@property (getter=isEnabled) char enabled; 
@property (assign) NSObject*<GEOCityPickerViewDelegate> delegate; 
-(GEOCity *)selectedCity;
-(void)selectDefaultCity;
-(void)setDelegate:(NSObject*<GEOCityPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(NSObject*<GEOCityPickerViewDelegate>)delegate;
-(void)awakeFromNib;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)setSelectedCity:(GEOCity *)arg1 ;
-(void)_bidirectionalBind:(id)arg1 betweenObject:(id)arg2 otherObject:(id)arg3 options:(id)arg4 ;
-(void)_bidirectionalUnbind:(id)arg1 betweenObject:(id)arg2 otherObject:(id)arg3 ;
-(void)_bindPublicToPrivateProperties;
-(void)adjustBindings:(id)arg1 ;
-(void)_unbindPublicToPrivateProperties;
-(id)_geoKitManagedObjectContext;
-(void)selectCityWithGeonameID:(long long)arg1 ;
-(id)viewPrivController;
@end

