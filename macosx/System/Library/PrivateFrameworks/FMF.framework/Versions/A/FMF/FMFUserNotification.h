/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:52 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/Versions/A/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface FMFUserNotification : NSObject
+(char)shouldDisplayAlerts;
+(void)displayUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2 ;
+(char)displayiCloudUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2 switchString:(id)arg3 doNotSwitch:(id)arg4 ;
+(char)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1 ;
+(void)showActiveDeviceChangedAlert;
+(void)showRestrictedAlert;
+(void)showMaxFollowersLimitReachedAlert;
+(void)showLocationServicesSwitchOffAlert;
+(void)showShareMyLocationSystemServiceOffAlert;
+(void)showShareMyLocationiCloudSettingsOffAlert;
+(void)showForbiddenRegionAlert;
+(void)notLoggedIntoiCloudAlert;
+(void)upselliCloudAlert;
+(void)showNetworkOfflineDuringOfferAlert;
+(void)showNetworkOfflineDuringStopOfferAlert;
+(void)show5XXDuringStartOfferAlert;
+(void)show5XXDuringStopOfferAlert;
+(void)showGenericErrorAlert;
@end

