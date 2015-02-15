/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:48 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCSCN_Animatable.h>
#import <QuartzComposer/NSCopying.h>

@class NSString, QCSCN_MaterialProperty, QCSCN_Program;

@interface QCSCN_Material : NSObject <QCSCN_Animatable, NSCopying> {

	id _reserved;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * diffuse; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * ambient; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * specular; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * emission; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * transparent; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * reflective; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * multiply; 
@property (nonatomic,readonly) QCSCN_MaterialProperty * normal; 
@property (assign,nonatomic) double shininess; 
@property (assign,nonatomic) double transparency; 
@property (nonatomic,copy) NSString * lightingModelName; 
@property (assign,getter=isLitPerPixel,nonatomic) char litPerPixel; 
@property (assign,getter=isDoubleSided,nonatomic) char doubleSided; 
@property (assign,nonatomic) int cullMode; 
@property (assign,nonatomic) int transparencyMode; 
@property (assign,nonatomic) char locksAmbientWithDiffuse; 
@property (assign,nonatomic) char writesToDepthBuffer; 
@property (nonatomic,retain) QCSCN_Program * program; 
+(id)material;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)argumentsForSelector:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)materialWithColor:(id)arg1 ;
+(id)materialWithContents:(id)arg1 ;
+(id)chromeMaterial;
+(id)glassMaterial;
+(id)metalMaterial;
+(id)phongMaterial;
+(id)glossyMaterial;
+(id)woodMaterial;
+(id)skinMaterial;
+(id)stoneMaterial;
+(id)propertyKeys;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(id)materialWithMaterialRef:(_C3DMaterial*)arg1 ;
-(id)init;
-(void)setContents:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)contents;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setContent:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)copy;
-(NSString *)name;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)content;
-(id)animationForKey:(id)arg1 ;
-(void)setColor:(id)arg1 ;
-(id)color;
-(id)properties;
-(void)removeAllAnimations;
-(QCSCN_MaterialProperty *)transparent;
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
-(id)initWithMaterialRef:(_C3DMaterial*)arg1 ;
-(void)_programWillChange:(id)arg1 ;
-(void)_programDidChange:(id)arg1 ;
-(void)_stopObservingProgram:(id)arg1 ;
-(_C3DEffect*)effectRef;
-(void)setProgram:(QCSCN_Program *)arg1 ;
-(id)initPresentationMaterialWithMaterialRef:(_C3DMaterial*)arg1 ;
-(_C3DEffectCommonProfile*)commonProfile;
-(QCSCN_MaterialProperty *)ambient;
-(QCSCN_MaterialProperty *)diffuse;
-(QCSCN_MaterialProperty *)specular;
-(QCSCN_MaterialProperty *)emission;
-(QCSCN_MaterialProperty *)reflective;
-(QCSCN_MaterialProperty *)multiply;
-(QCSCN_MaterialProperty *)normal;
-(void)_setupMaterialProperty:(id*)arg1 ;
-(id)_property:(id*)arg1 ;
-(double)shininess;
-(void)setShininess:(double)arg1 ;
-(double)transparency;
-(void)setTransparency:(double)arg1 ;
-(int)transparencyMode;
-(void)setTransparencyMode:(int)arg1 ;
-(NSString *)lightingModelName;
-(void)setLightingModelName:(NSString *)arg1 ;
-(char)isLitPerPixel;
-(void)setLitPerPixel:(char)arg1 ;
-(char)isDoubleSided;
-(void)setDoubleSided:(char)arg1 ;
-(int)cullMode;
-(void)setCullMode:(int)arg1 ;
-(id)shader;
-(void)setShader:(id)arg1 ;
-(QCSCN_Program *)program;
-(char)locksAmbientWithDiffuse;
-(void)setLocksAmbientWithDiffuse:(char)arg1 ;
-(char)avoidsOverLighting;
-(void)setAvoidsOverLighting:(char)arg1 ;
-(C3DFXGLSLProfileRef)_GLSLProfile;
-(C3DFXGLSLProgramRef)_programFromPassAtIndex:(long long)arg1 ;
-(void)_updateProgram:(C3DFXGLSLProgramRef)arg1 withSymbol:(id)arg2 ;
-(void)_updateParameters;
-(void)_updateProgramDelegate;
-(void)_updateProgramWithSymbol:(id)arg1 ;
-(void)_updateProgram:(id)arg1 ;
-(void)_startObservingProgram:(id)arg1 ;
-(void)setWritesToDepthBuffer:(char)arg1 ;
-(char)writesToDepthBuffer;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 property:(id)arg2 ;
-(char)litPerPixel;
-(char)doubleSided;
-(_C3DAnimationTarget*)targetForKey:(id)arg1 ;
-(id)propertyKeys;
-(void*)__CFObject;
-(void)setSceneRef:(_C3DScene*)arg1 ;
-(id)presentationMaterial;
-(_C3DMaterial*)materialRef;
@end

