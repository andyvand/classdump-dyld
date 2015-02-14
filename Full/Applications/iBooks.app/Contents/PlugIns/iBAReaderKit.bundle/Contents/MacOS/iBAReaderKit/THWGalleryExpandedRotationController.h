/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/THWExpandedRotationAnimationController.h>

@class THWGalleryRep, THWPagedCanvasController, THWZoomableCanvasController, NSString;

@interface THWGalleryExpandedRotationController : NSObject <THWExpandedRotationAnimationController> {

	THWGalleryRep* _rep;
	double _targetViewScale;
	double _scale;
	THWPagedCanvasController* _pagedCanvasController;
	THWZoomableCanvasController* _zoomableCanvasController;
	unsigned long long _pageIndex;
	CGPoint _contentCenterOffset;
	CGPoint _translate;

}

@property (nonatomic,retain,readonly) THWGalleryRep * rep;                                                 //@synthesize rep=_rep - In the implementation block
@property (nonatomic,readonly) CGPoint contentCenterOffset;                                                //@synthesize contentCenterOffset=_contentCenterOffset - In the implementation block
@property (nonatomic,readonly) double targetViewScale;                                                     //@synthesize targetViewScale=_targetViewScale - In the implementation block
@property (nonatomic,readonly) double scale;                                                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGPoint translate;                                                          //@synthesize translate=_translate - In the implementation block
@property (nonatomic,retain,readonly) THWPagedCanvasController * pagedCanvasController;                    //@synthesize pagedCanvasController=_pagedCanvasController - In the implementation block
@property (nonatomic,retain,readonly) THWZoomableCanvasController * zoomableCanvasController;              //@synthesize zoomableCanvasController=_zoomableCanvasController - In the implementation block
@property (nonatomic,readonly) unsigned long long pageIndex;                                               //@synthesize pageIndex=_pageIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)contentCenterOffset;
-(double)targetViewScale;
-(void)willRotateFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(void)p_updateOtherItemLayers:(char)arg1 ;
-(double)scaleForCenteredAutoRotateFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(int)autoRotationMode;
-(CGPoint)translateForCenteredAutoRotateFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(THWGalleryRep *)rep;
-(THWPagedCanvasController *)pagedCanvasController;
-(THWZoomableCanvasController *)zoomableCanvasController;
-(id)initWithRep:(id)arg1 pagedCanvasController:(id)arg2 zoomableCanvasController:(id)arg3 ;
-(double)scale;
-(CGPoint)translate;
-(unsigned long long)pageIndex;
-(void)dealloc;
@end

