/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DiscRecording/DiscRecording-Structs.h>
@interface DRFSObject : NSObject {

	void* _ref;

}
+(void)setupBindings;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)setSourcePath:(id)arg1 ;
-(DRFSContentObject*)_obj;
-(id)baseName;
-(id)specificNameForFilesystem:(id)arg1 ;
-(id)specificNames;
-(id)mangledNameForFilesystem:(id)arg1 ;
-(id)mangledNames;
-(id)propertyForKey:(id)arg1 inFilesystem:(id)arg2 mergeWithOtherFilesystems:(char)arg3 ;
-(id)propertiesForFilesystem:(id)arg1 mergeWithOtherFilesystems:(char)arg2 ;
-(unsigned)effectiveFilesystemMask;
-(unsigned)explicitFilesystemMask;
-(void)setBaseName:(id)arg1 ;
-(void)setSpecificName:(id)arg1 forFilesystem:(id)arg2 ;
-(void)setSpecificNames:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 inFilesystem:(id)arg3 ;
-(void)setProperties:(id)arg1 inFilesystem:(id)arg2 ;
-(void)setExplicitFilesystemMask:(unsigned)arg1 ;
-(id)mangledNameForFileSystem:(id)arg1 ;
-(void)setVirtual:(char)arg1 ;
-(void)setMangledNames:(id)arg1 ;
-(void)setEffectiveFilesystemMask:(unsigned)arg1 ;
-(id)specifiedISO9660Level1Name;
-(void)setSpecifiedISO9660Level1Name:(id)arg1 ;
-(id)specifiedISO9660Level2Name;
-(void)setSpecifiedISO9660Level2Name:(id)arg1 ;
-(id)specifiedJolietName;
-(void)setSpecifiedJolietName:(id)arg1 ;
-(id)specifiedHFSPlusName;
-(void)setSpecifiedHFSPlusName:(id)arg1 ;
-(id)specifiedUDFName;
-(void)setSpecifiedUDFName:(id)arg1 ;
-(id)ISO9660Properties;
-(id)jolietProperties;
-(id)HFSPlusProperties;
-(id)UDFProperties;
-(id)allFilesystemsProperties;
-(char)isVirtual;
-(id)init;
-(void)dealloc;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(char)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(id)sourcePath;
@end
