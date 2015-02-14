/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:55 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/EKUISingleViewGadget.h>
#import <CalendarUI/MKMapViewDelegate.h>

@class EKUIMapView, EKUIWeatherBox, NSImageView, CalUIFontSmoothedTextField, CLLocation, NSDateComponents, NSDictionary, NSString;

@interface EKUIMapGadget : EKUISingleViewGadget <MKMapViewDelegate> {

	EKUIMapView* _mapView;
	EKUIWeatherBox* _weatherview;
	NSImageView* _weatherIconView;
	CalUIFontSmoothedTextField* _temperatureField;
	CalUIFontSmoothedTextField* _cityNameField;
	CLLocation* _lastFetchedWeatherLocation;
	NSDateComponents* _lastFetchedWeatherDateComponents;
	NSDictionary* _layoutMetrics;

}

@property (retain) EKUIMapView * mapView;                                            //@synthesize mapView=_mapView - In the implementation block
@property (retain) EKUIWeatherBox * weatherview;                                     //@synthesize weatherview=_weatherview - In the implementation block
@property (retain) NSImageView * weatherIconView;                                    //@synthesize weatherIconView=_weatherIconView - In the implementation block
@property (retain) CalUIFontSmoothedTextField * temperatureField;                    //@synthesize temperatureField=_temperatureField - In the implementation block
@property (retain) CalUIFontSmoothedTextField * cityNameField;                       //@synthesize cityNameField=_cityNameField - In the implementation block
@property (retain) CLLocation * lastFetchedWeatherLocation;                          //@synthesize lastFetchedWeatherLocation=_lastFetchedWeatherLocation - In the implementation block
@property (retain) NSDateComponents * lastFetchedWeatherDateComponents;              //@synthesize lastFetchedWeatherDateComponents=_lastFetchedWeatherDateComponents - In the implementation block
@property (retain) NSDictionary * layoutMetrics;                                     //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interestedChangeKeys;
-(id)control;
-(char)shouldDisplayForEvent:(id)arg1 ;
-(id)initWithEventViewController:(id)arg1 ;
-(void)updateWithChanges:(id)arg1 ;
-(void)setLayoutMetrics:(NSDictionary *)arg1 ;
-(NSDictionary *)layoutMetrics;
-(void)setWeatherview:(EKUIWeatherBox *)arg1 ;
-(EKUIWeatherBox *)weatherview;
-(void)setWeatherIconView:(NSImageView *)arg1 ;
-(NSImageView *)weatherIconView;
-(void)setTemperatureField:(CalUIFontSmoothedTextField *)arg1 ;
-(CalUIFontSmoothedTextField *)temperatureField;
-(void)setCityNameField:(CalUIFontSmoothedTextField *)arg1 ;
-(CalUIFontSmoothedTextField *)cityNameField;
-(void)setUpMapView;
-(char)lastFetchedWeatherIsValidForCurrentOccurrence;
-(void)setLastFetchedWeatherLocation:(CLLocation *)arg1 ;
-(void)setLastFetchedWeatherDateComponents:(NSDateComponents *)arg1 ;
-(void)updateMapViewWithLocation:(id)arg1 startLocation:(id)arg2 ;
-(void)launchWeatherRequestForLocation:(id)arg1 ;
-(id)dateComponentsForEventStartDate;
-(char)currentOccurrenceHasStartDateComponents:(id)arg1 location:(id)arg2 ;
-(id)cityAndStateFromPlacemark:(id)arg1 ;
-(id)weatherStringForWeatherData:(id)arg1 ;
-(void)layoutWeather;
-(NSDateComponents *)lastFetchedWeatherDateComponents;
-(CLLocation *)lastFetchedWeatherLocation;
-(void)setMapView:(EKUIMapView *)arg1 ;
-(EKUIMapView *)mapView;
-(char)isEditable;
@end

