/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/RAID Utility.app/Contents/MacOS/RAID Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RAID Utility/CRRegistryEntry.h>

@interface CRDrive : CRRegistryEntry
+(Class)groupClass;
+(id)keyPathsForValuesAffectingVendor;
+(id)keyPathsForValuesAffectingProduct;
+(id)keyPathsForValuesAffectingFirmware;
+(id)keyPathsForValuesAffectingAvailable;
+(id)keyPathsForValuesAffectingBay;
+(id)keyPathsForValuesAffectingTotalCapacity;
+(id)keyPathsForValuesAffectingIsRoaming;
+(id)keyPathsForValuesAffectingIsForeign;
+(id)keyPathsForValuesAffectingIsJBOD;
+(id)keyPathsForValuesAffectingInterface;
-(long long)bay;
-(id)vendor;
-(id)firmware;
-(unsigned long long)totalCapacity;
-(char)isForeign;
-(char)isRoaming;
-(char)isJBOD;
-(char)available;
-(id)groups;
-(id)product;
-(id)interface;
-(id)description;
-(id)name;
@end

