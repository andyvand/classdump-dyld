/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/NSCoding.h>
#import <CoreImage/NSCopying.h>

@class CIImage;

@interface CIFilter : NSObject <NSCoding, NSCopying> {

	void** _priv[8];

}

@property (nonatomic,readonly) CIImage * outputImage; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)filter;
+(id)_filterRegistrationAttributesForMerge:(id)arg1 ;
+(int)enqueueCallback:(cl_kernelRef)arg1 device:(cl_device_idRef)arg2 globalWorkSize:(unsigned long long)arg3 outputImage:(cl_memRef)arg4 queue:(cl_command_queueRef)arg5 ;
+(id)filterWithString:(id)arg1 ;
+(id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(CGRect)arg2 error:(id*)arg3 ;
+(id)_filterList;
+(void)_setFilterList:(id)arg1 ;
+(id)localizedReferenceDocumentationForFilterName:(id)arg1 ;
+(id)filterWithName:(id)arg1 withInputParameters:(id)arg2 ;
+(id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3 ;
+(id)filterWithImageURL:(id)arg1 options:(id)arg2 ;
+(id)filterWithImageData:(id)arg1 options:(id)arg2 ;
+(id)allCategories:(char)arg1 ;
+(id)localizedNameForCategory:(id)arg1 ;
+(id)localizedNameForFilterName:(id)arg1 ;
+(id)localizedDescriptionForFilterName:(id)arg1 ;
+(void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)filterWithName:(id)arg1 ;
+(id)filterNamesInCategories:(id)arg1 ;
+(id)filterNamesInCategory:(id)arg1 ;
+(id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 ;
+(id)filterWithName:(id)arg1 keysAndValues:(id)arg2 ;
-(id)provideViewForUIConfiguration:(id)arg1 excludedKeys:(id)arg2 ;
-(id)viewForUIConfiguration:(id)arg1 excludedKeys:(id)arg2 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(id)CAMLType;
-(id)CA_attributesForKeyPath:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(char)enabled;
-(id)initWithCompatibilityVersion:(int)arg1 ;
-(id)filterClassDescription;
-(void)dumpToFileForBlock:(/*^block*/id)arg1 ;
-(id)_provideFilterCopyWithZone:(NSZone*)arg1 ;
-(void)_copyAttributesTo:(id)arg1 ;
-(int)compatibilityVersion;
-(void)setOnlyCustomAttributesDefaults;
-(char)_filterClassInCategory:(id)arg1 ;
-(void)setOption:(id)arg1 forKey:(id)arg2 ;
-(id)_serializedXMPString;
-(id)localizedNameForKey:(id)arg1 ;
-(void)dumpToFile;
-(id)dumpFilePath;
-(void)setIdentity;
-(id)customAttributes;
-(char)_isIdentity;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)debugDescription;
-(id)name;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(id)exposedBindings;
-(id)apply:(id)arg1 ;
-(id)inputKeys;
-(id)outputKeys;
-(id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(void)setDefaults;
@end

