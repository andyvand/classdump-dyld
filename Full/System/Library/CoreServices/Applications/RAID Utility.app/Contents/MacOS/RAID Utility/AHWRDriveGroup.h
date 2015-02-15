/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/RAID Utility.app/Contents/MacOS/RAID Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RAID Utility/CRDriveGroup.h>

@interface AHWRDriveGroup : CRDriveGroup
+(Class)driveClass;
+(Class)volumeClass;
+(id)keyPathsForValuesAffectingMinimumVolumeSize;
+(id)keyPathsForValuesAffectingProfile;
+(id)keyPathsForValuesAffectingStripeSize;
+(id)keyPathsForValuesAffectingGroupStatusDescription;
+(id)keyPathsForValuesAffectingGroupStatus;
+(id)keyPathsForValuesAffectingMirrorCount;
+(id)keyPathsForValuesAffectingStripeDepth;
+(id)keyPathsForValuesAffectingVolumeNames;
+(id)keyPathsForValuesAffectingSpares;
+(id)keyPathsForValuesAffectingOnJBOD;
+(id)keyPathsForValuesAffectingIdentifier;
-(id)drivesSortDescriptors;
-(id)volumesSortDescriptors;
-(id)raidLevel;
-(unsigned long long)minimumVolumeSize;
-(long long)groupStatus;
-(unsigned long long)stripeSize;
-(id)groupStatusDescription;
-(long long)mirrorCount;
-(long long)stripeDepth;
-(char)onJBOD;
-(id)volumeNames;
-(id)localizedRaidLevel;
-(id)spares;
-(id)availableCapacitySubTitle;
-(id)_accessibilityDescription;
-(id)profile;
-(id)subTitle;
-(void)dealloc;
-(long long)identifier;
-(id)image;
-(id)title;
-(id)_accessibilityValue;
-(id)statusImage;
@end

