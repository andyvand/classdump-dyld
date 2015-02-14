/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:47 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PackageKit-Structs.h>
#import <PackageKit/NSCoding.h>
#import <PackageKit/NSCopying.h>

@class NSXMLDocument, NSMutableDictionary, NSMutableArray;

@interface PKDistribution : NSObject <NSCoding, NSCopying> {

	NSXMLDocument* _xmlDocument;
	NSMutableDictionary* _choicesByIdentifier;
	dispatch_queue_sRef _choicesUpdateQueue;
	NSMutableDictionary* _pkgRefsByIdentifier;
	NSMutableArray* _pkgRefsInOrder;
	NSMutableDictionary* _stringsDictionaryByLocalization;
	dispatch_queue_sRef _pkgRefsUpdateQueue;

}
+(id)maxSupportedSpecVersion;
+(id)_element:(id)arg1 coalescedAttributesDictionaryWithChildrenNamed:(id)arg2 ;
-(void)setProductVersion:(id)arg1 ;
-(id)productVersion;
-(id)_rootElement;
-(id)_initWithXMLDocument:(id)arg1 error:(id*)arg2 ;
-(id)_minSpecVersionAddingSupportedOSVersionIfNeeded:(char)arg1 ;
-(id)upgradeCheckScript;
-(id)requiredCLDevicePredicate;
-(id)requiredGLRendererPredicate;
-(id)supportedOSVersions;
-(id)requiredBundleComponents;
-(id)requiredGigaBytesOfRAM;
-(double)_currentMinSpecVersionReturningSupportedOSVersion:(id*)arg1 ;
-(void)setSupportedOSVersions:(id)arg1 ;
-(id)_choicesByIdentifier;
-(id)_pkgRefsByIdentifier;
-(void)__cacheLineElements:(id)arg1 ;
-(id)_choicesOutlineElementForInterfaceType:(id)arg1 creatingIfNeeded:(char)arg2 ;
-(void)_verifyAndRepairChoiceTreeWithReferencingElement:(id)arg1 movedOrSynthesizedChoices:(id*)arg2 ;
-(void)_findIncorrectlyNestedChoicesUnder:(id)arg1 addTo:(id)arg2 ;
-(void)setAuxInfoPropertyList:(id)arg1 ;
-(id)_scriptUnder:(id)arg1 element:(id)arg2 attribute:(id)arg3 createIfNeeded:(char)arg4 ;
-(id)_requiredGraphicsPredicateOfType:(id)arg1 ;
-(void)_setRequiredGraphicsPredicate:(id)arg1 ofType:(id)arg2 ;
-(void)__cachePkgRefElement:(id)arg1 ;
-(id)_pkgRefsInOrder;
-(void)_didChangePkgRef:(id)arg1 originalIdentifier:(id)arg2 insertIndex:(unsigned long long)arg3 ;
-(id)_attributeNameForDomain:(int)arg1 ;
-(void)setEnabledValue:(id)arg1 forDomain:(int)arg2 ;
-(id)_searchAttributeDictionaryForSearchElement:(id)arg1 ;
-(id)_stringsElementForLocalization:(id)arg1 ;
-(id)stringsDictionaryForLocalization:(id)arg1 ;
-(id)minSpecVersion;
-(void)setMinSpecVersion:(id)arg1 ;
-(id)platformAttributesForType:(id)arg1 ;
-(void)setPlatformAttributes:(id)arg1 forType:(id)arg2 ;
-(id)objectForSourceURI:(id)arg1 returningAttributeName:(id*)arg2 ;
-(id)productIdentifier;
-(void)setProductIdentifier:(id)arg1 ;
-(id)_systemImageInformation;
-(id)_systemImagePackageReferences;
-(void)_setSystemImageInformation:(id)arg1 ;
-(void)_setSystemImagePackageReferences:(id)arg1 ;
-(id)titleKey;
-(void)setTitleKey:(id)arg1 ;
-(id)versionKey;
-(void)setVersionKey:(id)arg1 ;
-(void)setResourceData:(id)arg1 forKey:(id)arg2 ;
-(void)setResourceAttributes:(id)arg1 forKey:(id)arg2 ;
-(void)_didChangeChoice:(id)arg1 originalIdentifier:(id)arg2 ;
-(id)interfaceTypes;
-(id)choiceForIdentifier:(id)arg1 ;
-(void)_verifyAndRepairChoiceTreeForInterfaceType:(id)arg1 ;
-(id)ioMatchingDictionary;
-(void)setIOMatchingDictionary:(id)arg1 ;
-(id)topScript;
-(id)installationCheckScript;
-(id)volumeCheckScript;
-(id)peripheralCheckScript;
-(id)installationCheckScriptCreatingIfNeeded:(char)arg1 ;
-(void)setRequiredGigaBytesOfRAM:(id)arg1 ;
-(id)requiredHardwarePropertiesPredicate;
-(void)setRequiredHardwarePropertiesPredicate:(id)arg1 ;
-(void)setRequiredGLRendererPredicate:(id)arg1 ;
-(void)setRequiredCLDevicePredicate:(id)arg1 ;
-(char)requireSingleGraphicsDevice;
-(void)setRequireSingleGraphicsDevice:(char)arg1 ;
-(id)descriptionOfRequiredGraphicsHardware;
-(void)setDescriptionOfRequiredGraphicsHardware:(id)arg1 ;
-(id)descriptionOfRequiredHardwareProperties;
-(void)setDescriptionOfRequiredHardwareProperties:(id)arg1 ;
-(id)volumeCheckScriptCreatingIfNeeded:(char)arg1 ;
-(id)upgradeCheckScriptCreatingIfNeeded:(char)arg1 ;
-(id)peripheralCheckScriptCreatingIfNeeded:(char)arg1 ;
-(char)requireAllBundleComponents;
-(id)descriptionOfRequiredBundleComponents;
-(void)setRequiredBundleComponents:(id)arg1 requireAll:(char)arg2 description:(id)arg3 ;
-(id)_futureSystemVersionDictionary;
-(unsigned long long)countOfPackageReferences;
-(id)objectInPackageReferencesAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inPackageReferencesAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromPackageReferencesAtIndex:(unsigned long long)arg1 ;
-(id)packageReferenceForIdentifier:(id)arg1 ;
-(id)allPackageIdentifiers;
-(id)_choicesUsingPackageReference:(id)arg1 ;
-(id)enabledValueForDomain:(int)arg1 ;
-(id)enabledScriptForDomain:(int)arg1 creatingIfNeeded:(char)arg2 ;
-(id)orderedSearchIdentifiers;
-(id)searchAttributesForIdentifier:(id)arg1 ;
-(void)setStringsDictionary:(id)arg1 forLocalization:(id)arg2 ;
-(id)optionsDictionary;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 ;
-(id)resourceAttributesForKey:(id)arg1 ;
-(id)resourceDataForKey:(id)arg1 ;
-(void)_setDistributionURL:(id)arg1 ;
-(id)distributionURL;
-(id)rootChoiceForInterfaceType:(id)arg1 creatingIfNeeded:(char)arg2 ;
-(id)auxInfoPropertyList;
-(id)XMLData;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tags;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setTags:(id)arg1 ;
-(id)localizations;
-(void)setOptionsDictionary:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
@end

