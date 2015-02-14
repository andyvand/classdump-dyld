/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreText/NSSecureCoding.h>
#import <CoreText/NSCopying.h>
#import <CoreText/NSMutableCopying.h>
#import <CoreText/NSCoding.h>

@interface NSFontCollection : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSCoding>
+(id)_URLsForFontCollectionsDirectoriesWithVisibility:(unsigned long long)arg1 ;
+(id)_URLsForFontCollectionsInDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 error:(id*)arg3 ;
+(id)_collectionAtURL:(id)arg1 error:(id*)arg2 ;
+(id)_namesOfFontCollectionsWithVisibility:(unsigned long long)arg1 includingHidden:(char)arg2 ;
+(id)_copyArchivedDictionaryFromURL:(id)arg1 error:(id*)arg2 ;
+(id)_newFromDictionary:(id)arg1 ;
+(id)fontCollectionWithAllAvailableDescriptors;
+(id)fontCollectionWithLocale:(id)arg1 ;
+(id)_collectionFromFileWithName:(id)arg1 visibility:(unsigned long long*)arg2 ;
+(id)_directoryURLForDomain:(unsigned long long)arg1 error:(id*)arg2 ;
+(id)_combineDescriptorsIncluded:(id)arg1 excluded:(id)arg2 ;
+(id)_URLForName:(id)arg1 domain:(unsigned long long)arg2 error:(id*)arg3 ;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)allFontCollectionNames;
+(id)fontCollectionWithName:(id)arg1 ;
+(id)fontCollectionWithDescriptors:(id)arg1 ;
+(char)showFontCollection:(id)arg1 withName:(id)arg2 visibility:(unsigned long long)arg3 error:(id*)arg4 ;
+(char)hideFontCollectionWithName:(id)arg1 visibility:(unsigned long long)arg2 error:(id*)arg3 ;
+(char)renameFontCollectionWithName:(id)arg1 visibility:(unsigned long long)arg2 toName:(id)arg3 error:(id*)arg4 ;
+(id)fontCollectionWithName:(id)arg1 visibility:(unsigned long long)arg2 ;
-(id)collectionAttributes;
-(id)exclusionDescriptors;
-(id)_dictionaryForArchivingWithAttributes:(id)arg1 ;
-(char)_saveToURL:(id)arg1 error:(id*)arg2 ;
-(char)_hasDesignatedName:(id*)arg1 visibility:(unsigned long long*)arg2 ;
-(void)_replaceDescriptorsFromCollection:(id)arg1 ;
-(id)matchingDescriptorsWithOptions:(id)arg1 ;
-(id)matchingDescriptorsForFamily:(id)arg1 ;
-(id)matchingDescriptorsForFamily:(id)arg1 options:(id)arg2 ;
-(void)registeredFontsChangedNotification:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)matchingDescriptors;
-(id)queryDescriptors;
@end

