/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSCoding.h>

@class NSURL, NSString;

@interface NSColorProfile : NSObject <NSCoding> {

	void* _profile;
	void* _header;
	NSURL* _location;
	void* _md5;
	NSString* _name;
	void* _dProfileRef;
	void* _reserved;

}
+(id)availableProfiles;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithICCProfileData:(id)arg1 ;
-(id)ICCProfileData;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(id)localizedName;
-(id)initWithColorSyncProfile:(void*)arg1 ;
-(void*)colorSyncProfile;
-(unsigned)_colorSyncProfileClass;
-(unsigned)_colorSyncProfileSpace;
-(void*)MD5;
-(id)initWithColorSyncInfo:(void*)arg1 ;
-(long long)_appropriateColorPanelSliderPane;
-(long long)_isGenericProfile;
@end

