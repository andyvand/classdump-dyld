/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAPropertyInfo.h>
#import <QuartzCore/NSCoding.h>
#import <QuartzCore/CAMediaTiming.h>

@class NSArray, NSString, CAMeshTransform, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {

	CALayerIvars* _attr;

}

@property (copy) NSArray * states; 
@property (copy) NSArray * stateTransitions; 
@property (readonly) CGRect visibleRect; 
@property (assign) unsigned layoutFlags; 
@property (assign) CGSize spacing; 
@property (assign) CGSize margin; 
@property (assign) unsigned tableColumns; 
@property (assign) unsigned tableRows; 
@property (assign) unsigned tableColumn; 
@property (assign) unsigned tableRow; 
@property (copy) NSString * wrappedOrigin; 
@property (copy) NSString * wrappedDirection; 
@property (copy) CAMeshTransform * meshTransform; 
@property (assign) char needsLayoutOnGeometryChange; 
@property (assign) char canDrawConcurrently; 
@property (assign) char acceleratesDrawing; 
@property (getter=isFrozen) char frozen; 
@property (assign) char allowsHitTesting; 
@property (assign) char hitTestsAsOpaque; 
@property (assign) char clearsContext; 
@property (assign) char contentsOpaque; 
@property (assign) char literalContentsCenter; 
@property (copy) NSString * contentsScaling; 
@property (assign) CGAffineTransform contentsTransform; 
@property (assign) char invertsShadow; 
@property (assign) char shadowPathIsBounds; 
@property (assign) char swapsMaskAndLayer; 
@property (retain) id cornerContents; 
@property (assign) CGRect cornerContentsCenter; 
@property (assign) unsigned maskedCorners; 
@property (assign) double motionBlurAmount; 
@property (assign) char sortsSublayers; 
@property (assign) char preloadsCache; 
@property (assign) char allowsEdgeAntialiasing; 
@property (assign) char allowsGroupOpacity; 
@property (assign) char allowsGroupBlending; 
@property (assign) char allowsDisplayCompositing; 
@property (getter=isFloating) char floating; 
@property (assign) CGSize sizeRequisition; 
@property (assign) CGSize backgroundColorPhase; 
@property (copy) NSArray * lights; 
@property (assign) char acceptsLights; 
@property (assign) double ambientReflectance; 
@property (assign) double diffuseReflectance; 
@property (assign) double specularReflectance; 
@property (assign) double shininess; 
@property (assign) double metallicity; 
@property (copy) NSArray * behaviors; 
@property (assign) double velocityStretch; 
@property (assign) double mass; 
@property (assign) double momentOfInertia; 
@property (assign) double coefficientOfRestitution; 
@property (copy) NSArray * constraints; 
@property (assign) CGRect bounds; 
@property (assign) CGPoint position; 
@property (assign) double zPosition; 
@property (assign) CGPoint anchorPoint; 
@property (assign) double anchorPointZ; 
@property (assign) CATransform3D transform; 
@property (assign) CGRect frame; 
@property (getter=isHidden) char hidden; 
@property (getter=isDoubleSided) char doubleSided; 
@property (getter=isGeometryFlipped) char geometryFlipped; 
@property (readonly) CALayer * superlayer; 
@property (copy) NSArray * sublayers; 
@property (assign) CATransform3D sublayerTransform; 
@property (retain) CALayer * mask; 
@property (assign) char masksToBounds; 
@property (retain) id contents; 
@property (assign) CGRect contentsRect; 
@property (copy) NSString * contentsGravity; 
@property (assign) double contentsScale; 
@property (assign) CGRect contentsCenter; 
@property (copy) NSString * minificationFilter; 
@property (copy) NSString * magnificationFilter; 
@property (assign) float minificationFilterBias; 
@property (getter=isOpaque) char opaque; 
@property (assign) char needsDisplayOnBoundsChange; 
@property (assign) char drawsAsynchronously; 
@property (assign) unsigned edgeAntialiasingMask; 
@property (assign) CGColorRef backgroundColor; 
@property (assign) double cornerRadius; 
@property (assign) double borderWidth; 
@property (assign) CGColorRef borderColor; 
@property (assign) float opacity; 
@property (retain) id compositingFilter; 
@property (copy) NSArray * filters; 
@property (copy) NSArray * backgroundFilters; 
@property (assign) char shouldRasterize; 
@property (assign) double rasterizationScale; 
@property (assign) CGColorRef shadowColor; 
@property (assign) float shadowOpacity; 
@property (assign) CGSize shadowOffset; 
@property (assign) double shadowRadius; 
@property (assign) CGPathRef shadowPath; 
@property (assign) unsigned autoresizingMask; 
@property (retain) id layoutManager; 
@property (copy) NSDictionary * actions; 
@property (copy) NSString * name; 
@property (__weak) id delegate; 
@property (copy) NSDictionary * style; 
@property (assign) double beginTime; 
@property (assign) double duration; 
@property (assign) float speed; 
@property (assign) double timeOffset; 
@property (assign) float repeatCount; 
@property (assign) double repeatDuration; 
@property (assign) char autoreverses; 
@property (copy) NSString * fillMode; 
+(id)CA_attributes;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)attributesForKey:(id)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(char)_hasRenderLayerSubclass;
+(char)_shouldFinalizeOnMainThread;
+(char)needsLayoutForKey:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 ;
+(id)layerWithRemoteClientId:(unsigned)arg1 ;
+(id)layer;
+(id)defaultActionForKey:(id)arg1 ;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)properties;
+(id)defaultValueForKey:(id)arg1 ;
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(char)needsDisplayForKey:(id)arg1 ;
-(char)floating;
-(void)setFrozen:(char)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setShadowPath:(CGPathRef)arg1 ;
-(void)resizeWithOldSuperlayerSize:(CGSize)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setContentsOpaque:(char)arg1 ;
-(void)setMinificationFilterBias:(float)arg1 ;
-(void)setShadowPathIsBounds:(char)arg1 ;
-(void)insertState:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addState:(id)arg1 ;
-(void)removeState:(id)arg1 ;
-(id)stateWithName:(id)arg1 ;
-(id)dependentStatesOfState:(id)arg1 ;
-(id)stateTransitionFrom:(id)arg1 to:(id)arg2 ;
-(void)_scrollPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(void)_scrollRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(CGRect)_visibleRectOfLayer:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(id)sublayerEnumerator;
-(void)setRepeatDuration:(double)arg1 ;
-(char)shouldArchiveValueForKey:(id)arg1 ;
-(id)attributesForKeyPath:(id)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(id)_initWithReference:(id)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(unsigned)_renderImageCopyFlags;
-(float)minificationFilterBias;
-(void)_renderBackgroundInContext:(CGContextRef)arg1 ;
-(CGColorSpaceRef)_retainColorSpace;
-(char)needsLayoutOnGeometryChange;
-(char)_canDisplayConcurrently;
-(void)resizeSublayersWithOldSize:(CGSize)arg1 ;
-(id)ancestorSharedWithLayer:(id)arg1 ;
-(char)ignoresHitTesting;
-(char)allowsHitTesting;
-(char)sortsSublayers;
-(char)_scheduleAnimationTimer;
-(void)_cancelAnimationTimer;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(void)_renderBorderInContext:(CGContextRef)arg1 ;
-(unsigned)edgeAntialiasingMask;
-(char)drawsMipmapLevels;
-(void)setSizeRequisition:(CGSize)arg1 ;
-(CGSize)sizeRequisition;
-(CGSize)_preferredSize;
-(unsigned)maskedCorners;
-(CGRect)cornerContentsCenter;
-(CGPathRef)shadowPath;
-(char)shouldRasterize;
-(double)rasterizationScale;
-(double)motionBlurAmount;
-(CAMeshTransform *)meshTransform;
-(NSArray *)lights;
-(NSArray *)behaviors;
-(CGSize)backgroundColorPhase;
-(char)acceptsLights;
-(double)ambientReflectance;
-(double)diffuseReflectance;
-(double)specularReflectance;
-(double)metallicity;
-(double)velocityStretch;
-(double)momentOfInertia;
-(double)coefficientOfRestitution;
-(char)preloadsCache;
-(char)allowsEdgeAntialiasing;
-(char)allowsGroupOpacity;
-(char)allowsDisplayCompositing;
-(char)allowsGroupBlending;
-(char)hitTestsAsOpaque;
-(char)literalContentsCenter;
-(char)swapsMaskAndLayer;
-(char)invertsShadow;
-(char)shadowPathIsBounds;
-(void)_didCommitLayer:(Transaction*)arg1 ;
-(void)setMeshTransform:(CAMeshTransform *)arg1 ;
-(id)layerAtTime:(double)arg1 ;
-(void)setAllowsHitTesting:(char)arg1 ;
-(void)setHitTestsAsOpaque:(char)arg1 ;
-(void)setLiteralContentsCenter:(char)arg1 ;
-(void)setSortsSublayers:(char)arg1 ;
-(void)setInvertsShadow:(char)arg1 ;
-(char)contentsOpaque;
-(void)setSwapsMaskAndLayer:(char)arg1 ;
-(void)setMotionBlurAmount:(double)arg1 ;
-(void)setPreloadsCache:(char)arg1 ;
-(void)setBackgroundColorPhase:(CGSize)arg1 ;
-(void)setLights:(NSArray *)arg1 ;
-(void)setAcceptsLights:(char)arg1 ;
-(void)setAmbientReflectance:(double)arg1 ;
-(void)setDiffuseReflectance:(double)arg1 ;
-(void)setSpecularReflectance:(double)arg1 ;
-(void)setMetallicity:(double)arg1 ;
-(void)setBehaviors:(NSArray *)arg1 ;
-(void)setVelocityStretch:(double)arg1 ;
-(void)setMomentOfInertia:(double)arg1 ;
-(void)setCoefficientOfRestitution:(double)arg1 ;
-(char)getRendererInfo:(CARenderRendererInfo*)arg1 size:(unsigned long long)arg2 ;
-(void)setAllowsEdgeAntialiasing:(char)arg1 ;
-(double)convertTime:(double)arg1 toLayer:(id)arg2 ;
-(NSDictionary *)actions;
-(CGPoint)convertPoint:(CGPoint)arg1 fromLayer:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toLayer:(id)arg2 ;
-(char)hidden;
-(void)setActions:(NSDictionary *)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(double)anchorPointZ;
-(void)setAnchorPointZ:(double)arg1 ;
-(char)acceleratesDrawing;
-(void)setAcceleratesDrawing:(char)arg1 ;
-(float)shadowOpacity;
-(id)initWithBounds:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(void)_display;
-(CGSize)preferredFrameSize;
-(char)needsDisplayOnBoundsChange;
-(char)opaque;
-(CGAffineTransform)affineTransform;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)setContentsScale:(double)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(char)arg1 ;
-(void)setClearsContext:(char)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)addSublayer:(id)arg1 ;
-(void)setNeedsLayout;
-(void)finalize;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(CGRect)bounds;
-(char)contentsAreFlipped;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSublayers;
-(void)setNeedsDisplay;
-(double)contentsScale;
-(double)convertTime:(double)arg1 fromLayer:(id)arg2 ;
-(CALayer *)superlayer;
-(void)setSpeed:(float)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(float)speed;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(void)setFrame:(CGRect)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setEdgeAntialiasingMask:(unsigned)arg1 ;
-(void)setContentsChanged;
-(id)contents;
-(void)removeFromSuperlayer;
-(void)setAffineTransform:(CGAffineTransform)arg1 ;
-(double)timeOffset;
-(id)valueForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGPoint)position;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(CGRect)frame;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setContentsGravity:(NSString *)arg1 ;
-(void)setAllowsDisplayCompositing:(char)arg1 ;
-(void)setSublayerTransform:(CATransform3D)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setHidden:(char)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(char)isHidden;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(id)context;
-(void)layerDidChangeDisplay:(unsigned)arg1 ;
-(void)setMasksToBounds:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)debugDescription;
-(NSDictionary *)style;
-(NSString *)name;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setFlipped:(char)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(unsigned)autoresizingMask;
-(void)setAutoresizingMask:(unsigned)arg1 ;
-(id)delegate;
-(CGSize)size;
-(double)repeatDuration;
-(float)repeatCount;
-(double)beginTime;
-(char)autoreverses;
-(id)hitTest:(CGPoint)arg1 ;
-(void)display;
-(void)_dealloc;
-(char)isFlipped;
-(char)containsPoint:(CGPoint)arg1 ;
-(CATransform3D)transform;
-(double)borderWidth;
-(double)cornerRadius;
-(CGColorRef)borderColor;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(void)setZPosition:(double)arg1 ;
-(CGRect)contentsCenter;
-(void)setContentsCenter:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(char)isOpaque;
-(CGColorRef)backgroundColor;
-(void)scrollRectToVisible:(CGRect)arg1 ;
-(char)isDescendantOf:(id)arg1 ;
-(CGRect)visibleRect;
-(void)scrollPoint:(CGPoint)arg1 ;
-(void)displayIfNeeded;
-(id)presentationLayer;
-(void)renderInContext:(CGContextRef)arg1 ;
-(id)layoutManager;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(NSArray *)sublayers;
-(CGRect)convertRect:(CGRect)arg1 toLayer:(id)arg2 ;
-(id)animationForKey:(id)arg1 ;
-(CGColorRef)shadowColor;
-(char)allowsWeakReference;
-(char)retainWeakReference;
-(void)setShadowOpacity:(float)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)layoutIfNeeded;
-(id)compositingFilter;
-(void)setCompositingFilter:(id)arg1 ;
-(NSArray *)backgroundFilters;
-(void)setBackgroundFilters:(NSArray *)arg1 ;
-(CALayer *)mask;
-(CGSize)shadowOffset;
-(void)setContentsScaling:(NSString *)arg1 ;
-(NSString *)contentsGravity;
-(NSString *)contentsScaling;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(CATransform3D)sublayerTransform;
-(void)setTransform:(CATransform3D)arg1 ;
-(id)modelLayer;
-(char)needsDisplay;
-(void)setStyle:(NSDictionary *)arg1 ;
-(void)reloadValueForKeyPath:(id)arg1 ;
-(void)setDrawsAsynchronously:(char)arg1 ;
-(char)drawsAsynchronously;
-(char)needsLayout;
-(void)setMass:(double)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromLayer:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)setAllowsGroupBlending:(char)arg1 ;
-(void)setMask:(CALayer *)arg1 ;
-(char)masksToBounds;
-(void)setCornerContents:(id)arg1 ;
-(void)setCornerContentsCenter:(CGRect)arg1 ;
-(void)setMaskedCorners:(unsigned)arg1 ;
-(id)cornerContents;
-(void)setLayoutManager:(id)arg1 ;
-(void)setCanDrawConcurrently:(char)arg1 ;
-(void)setGeometryFlipped:(char)arg1 ;
-(void)clearHasBeenCommitted;
-(char)hasBeenCommitted;
-(void)layoutBelowIfNeeded;
-(char)canDrawConcurrently;
-(CGPoint)anchorPoint;
-(char)isGeometryFlipped;
-(char)layoutIsActive;
-(void*)regionBeingDrawn;
-(void)invalidateContents;
-(char)isFloating;
-(void)setFloating:(char)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setSublayers:(NSArray *)arg1 ;
-(NSString *)fillMode;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)removeAllAnimations;
-(void)setShouldRasterize:(char)arg1 ;
-(void)setRasterizationScale:(double)arg1 ;
-(void)setAllowsGroupOpacity:(char)arg1 ;
-(double)mass;
-(char)clearsContext;
-(NSString *)minificationFilter;
-(void)setMinificationFilter:(NSString *)arg1 ;
-(NSString *)magnificationFilter;
-(void)setMagnificationFilter:(NSString *)arg1 ;
-(id)layerBeingDrawn;
-(void)setContentsTransform:(CGAffineTransform)arg1 ;
-(void)setNeedsLayoutOnGeometryChange:(char)arg1 ;
-(char)isFrozen;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)animationKeys;
-(double)shadowRadius;
-(double)shininess;
-(void)setShininess:(double)arg1 ;
-(char)isDoubleSided;
-(void)setDoubleSided:(char)arg1 ;
-(CGAffineTransform)contentsTransform;
-(char)doubleSided;
-(float)opacity;
-(double)zPosition;
-(void)setRepeatCount:(float)arg1 ;
-(void)setAutoreverses:(char)arg1 ;
@end

