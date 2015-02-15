/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:14 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCopying.h>

@class NSURL, NSBundle, NSString, NSDictionary;

@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying> {

	NSURL* _url;
	NSBundle* _localizationBundle;
	NSString* _modelStringsFileName;
	NSDictionary* _localizationDictionary;
	char _hasSetLocalizationDictionary;

}
-(id)localizedEntityNameForEntity:(id)arg1 ;
-(id)localizedPropertyNameForProperty:(id)arg1 ;
-(id)localizedModelStringForKey:(id)arg1 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)localizationDictionary;
-(void)setLocalizationDictionary:(id)arg1 ;
-(void)_ensureLocalizationDictionaryIsInitialized;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(id)_cachedObjectForKey:(id)arg1 value:(void*)arg2 ;
-(id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end

