/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>
+(id)localizedCountryCodeNameMap;
+(id)safari_preferredLanguageCode;
+(id)_localeOverridesForLocaleWithIdentifier:(id)arg1 ;
+(void)_mapkit_overrideGuidanceUnit:(long long)arg1 ;
+(void)_mapkit_overrideDistanceUnit:(long long)arg1 ;
+(long long)_vk_indexForLocale:(id)arg1 ;
+(id)currentDeviceLanguageForFacebook;
+(id)deviceLanguageIdentifier;
+(id)canonicalLocaleIdentifierFromComponents:(id)arg1 ;
+(id)deviceLanguageLocale;
+(id)string:(id)arg1 withCapitalizedDisplayNamesForFirstLanguageIdentifier:(id)arg2 secondLanguageIdentifier:(id)arg3 thirdLanguageIdentifier:(id)arg4 ;
+(id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2 ;
+(id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1 ;
+(id)addLikelySubtagsForLocaleIdentifier:(id)arg1 ;
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4 ;
+(id)systemLanguages;
+(void)setPreferredLanguages:(id)arg1 ;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3 ;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3 ;
+(id)autoupdatingCurrentLocale;
+(id)internetServicesRegion;
+(id)availableLocaleIdentifiers;
+(id)ISOLanguageCodes;
+(id)ISOCountryCodes;
+(id)ISOCurrencyCodes;
+(id)commonISOCurrencyCodes;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned long long)lineDirectionForLanguage:(id)arg1 ;
+(id)systemLocale;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)currentLocale;
+(unsigned long long)characterDirectionForLanguage:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)preferredLanguages;
-(char)_mapkit_distanceUsesMetricSystem;
-(id)_mapkit_objectForKey:(id)arg1 ;
-(char)_mapkit_guidanceUsesMetricSystem;
-(char)_mapkit_useYardsForShortDistances;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(Class)classForCoder;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)_cfTypeID;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localeIdentifier;
-(id)_prefs;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
@end

