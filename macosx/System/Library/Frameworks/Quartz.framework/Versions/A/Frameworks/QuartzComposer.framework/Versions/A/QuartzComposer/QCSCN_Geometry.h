/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:26 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCSCN_Animatable.h>
#import <QuartzComposer/QCSCN_BoundingVolume.h>
#import <QuartzComposer/NSCopying.h>

@class NSString, NSArray, QCSCN_Material;

@interface QCSCN_Geometry : NSObject <QCSCN_Animatable, QCSCN_BoundingVolume, NSCopying> {

	id _geometryReserved;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * materials; 
@property (nonatomic,readonly) long long geometryElementCount; 
@property (nonatomic,retain) QCSCN_Material * firstMaterial; 
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)argumentsForSelector:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)propertyKeys;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(id)geometryWithGeometryRef:(_C3DGeometry*)arg1 ;
+(id)geometryWithSources:(id)arg1 elements:(id)arg2 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)copy;
-(NSString *)name;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)animationForKey:(id)arg1 ;
-(id)material;
-(void)setMaterial:(id)arg1 ;
-(void)removeAllAnimations;
-(id)valueForUndefinedKey:(id)arg1 ;
-(_C3DScene*)sceneRef;
-(void)_syncObjCModel;
-(void)removeAllAnimationsBeforeDying:(void*)arg1 ;
-(id)animationKeys;
-(void)_syncObjCAnimations;
-(void)_sceneRefDidChange;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(void)_syncEntityObjCModel;
-(void)addAnimation:(id)arg1 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(void)__removeAnimationForKey:(id)arg1 ;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 ;
-(id)propertyKeys;
-(void*)__CFObject;
-(void)setSceneRef:(_C3DScene*)arg1 ;
-(NSArray *)materials;
-(void)edgeAntialiasingDidChange;
-(id)initWithGeometryRef:(_C3DGeometry*)arg1 ;
-(long long)geometryElementCount;
-(id)geometryDescription;
-(id)initPresentationGeometryWithGeometryRef:(_C3DGeometry*)arg1 ;
-(id)geometrySourcesForSemantic:(id)arg1 ;
-(id)geometrySourceForSemantic:(id)arg1 ;
-(_C3DGeometry*)geometryRef;
-(char)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(char)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(void)setMaterials:(NSArray *)arg1 ;
-(id)_materialWithName:(id)arg1 ;
-(void)_expand;
-(void)_didAddMaterial:(id)arg1 ;
-(id)mutableMaterials;
-(id)_firstMaterial;
-(void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectInMaterialsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromMaterialsAtIndex:(unsigned long long)arg1 ;
-(void)removeAllMaterials;
-(QCSCN_Material *)firstMaterial;
-(void)setFirstMaterial:(QCSCN_Material *)arg1 ;
-(char)parseKeyPath:(id)arg1 intoDestination:(id*)arg2 remainingPath:(id*)arg3 ;
-(id)geometryElementAtIndex:(long long)arg1 ;
-(void)_jsInsertMaterial:(id)arg1 atIndex:(id)arg2 ;
-(void)removeMaterial:(id)arg1 ;
-(void)replaceMaterial:(id)arg1 with:(id)arg2 ;
-(id)materialWithName:(id)arg1 ;
-(id)_jsGeometryElementCount;
-(id)_jsGeometryElementAtIndex:(id)arg1 ;
-(id)getBoundingBox;
-(id)getBoundingSphere;
-(id)__geometryClassStorage;
-(void)setGeometryRef:(_C3DGeometry*)arg1 ;
-(id)edgeAntialiasing;
-(id)presentationGeometry;
-(void)setMorphableSourceSemantics:(id)arg1 ;
-(id)morphableSourceSemantics;
-(id)keyForNodeAttributes;
-(unsigned long long)countOfMaterials;
-(id)objectInMaterialsAtIndex:(unsigned long long)arg1 ;
-(void)removeMaterialAtIndex:(unsigned long long)arg1 ;
-(void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2 ;
-(int)primitiveType;
-(void)setPrimitiveType:(int)arg1 ;
@end

