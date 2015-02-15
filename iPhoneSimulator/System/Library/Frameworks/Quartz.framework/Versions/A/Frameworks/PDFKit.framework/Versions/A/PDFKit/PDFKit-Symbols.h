-[PDFTileRenderingOperation dealloc]
-[PDFTileRenderingOperation main]
-[PDFTileRenderingOperation shadowMask]
-[PDFTileRenderingOperation setShadowMask:]
-[PDFTileRenderingOperation drawShadowedRectInContext:withBounds:]
-[PDFTileRenderingOperation cancel]
-[PDFTileRenderingOperation isOptimalForSize:scaleFactor:]
-[PDFTileRenderingOperation image]
-[PDFTileRenderingOperation description]
-[PDFTileRenderingOperation renderer]
-[PDFTileRenderingOperation setRenderer:]
-[PDFTileRenderingOperation size]
-[PDFTileRenderingOperation setSize:]
-[PDFTileRenderingOperation clipRect]
-[PDFTileRenderingOperation setClipRect:]
-[PDFTileRenderingOperation contentsScale]
-[PDFTileRenderingOperation setContentsScale:]
-[PDFTileRenderingOperation scrollOffset]
-[PDFTileRenderingOperation setScrollOffset:]
-[PDFTileRenderingOperation contentSize]
-[PDFTileRenderingOperation setContentSize:]
-[PDFTileRenderingOperation delegate]
-[PDFTileRenderingOperation setDelegate:]
-[PDFTileRenderingOperation layout]
-[PDFTileRenderingOperation setLayout:]
-[PDFTileRenderingOperation layer]
-[PDFTileRenderingOperation setLayer:]
+[PDFTileRenderer rendererForDocument:withLayout:andDelegate:]
-[PDFTileRenderer init]
-[PDFTileRenderer dealloc]
-[PDFTileRenderer _operationDidComplete:]
-[PDFTileRenderer renderWithClipRect:forLayer:withContentSize:andScaleFactor:andScrollOffset:]
___94-[PDFTileRenderer renderWithClipRect:forLayer:withContentSize:andScaleFactor:andScrollOffset:]_block_invoke
___94-[PDFTileRenderer renderWithClipRect:forLayer:withContentSize:andScaleFactor:andScrollOffset:]_block_invoke_2
___copy_helper_block_
___destroy_helper_block_
___copy_helper_block_187
___destroy_helper_block_188
-[PDFTileRenderer renderedImage]
-[PDFTileRenderer size]
-[PDFTileRenderer clipRect]
+[PDFTileRenderer keyPathsForValuesAffectingComplete]
-[PDFTileRenderer isComplete]
-[PDFTileRenderer waitUntilCurrentRenderCompletes]
-[PDFTileRenderer invalidate]
-[PDFTileRenderer recreateBitmapCache]
-[PDFTileRenderer returnBitmapData:forIndex:]
-[PDFTileRenderer requestBitmapData:]
-[PDFTileRenderer setTileSize:]
-[PDFTileRenderer setColorSpace:]
-[PDFTileRenderer colorSpace]
-[PDFTileRenderer document]
-[PDFTileRenderer setDocument:]
-[PDFTileRenderer renderQueue]
-[PDFTileRenderer setRenderQueue:]
-[PDFTileRenderer completedOperation]
-[PDFTileRenderer setCompletedOperation:]
-[PDFTileRenderer currentOperation]
-[PDFTileRenderer setCurrentOperation:]
-[PDFTileRenderer completionBlock]
-[PDFTileRenderer setCompletionBlock:]
-[PDFTileRenderer startRenderTime]
-[PDFTileRenderer setStartRenderTime:]
-[PDFTileRenderer stopRenderTime]
-[PDFTileRenderer setStopRenderTime:]
-[PDFTileRenderer layout]
-[PDFTileRenderer setLayout:]
-[PDFTileRenderer delegate]
-[PDFTileRenderer setDelegate:]
+[PDFHUDLayerController hudWidthForControlArray:]
-[PDFHUDLayerController initWithControlArray:]
-[PDFHUDLayerController dealloc]
-[PDFHUDLayerController boundsForControlAtIndex:]
-[PDFHUDLayerController controlFromPoint:]
-[PDFHUDLayerController isMouseDown]
-[PDFHUDLayerController mouseDown:withHUDRect:]
-[PDFHUDLayerController mouseDragged:]
-[PDFHUDLayerController mouseUp:withHUDRect:]
-[PDFHUDLayerController performActionForControl:]
-[PDFHUDLayerController getBitmapForControl:active:]
-[PDFHUDLayerController drawInContext:]
-[PDFHUDLayerController setDelegate:]
__DataFree
__VMReserve
__VMDiscard
__MallocReserve
__MallocDiscard
+[PDFDocument initialize]
-[PDFDocument init]
-[PDFDocument initWithURL:]
-[PDFDocument initWithData:]
-[PDFDocument copyWithZone:]
-[PDFDocument dealloc]
-[PDFDocument finalize]
-[PDFDocument documentURL]
-[PDFDocument documentRef]
-[PDFDocument documentAttributes]
-[PDFDocument setDocumentAttributes:]
-[PDFDocument majorVersion]
-[PDFDocument minorVersion]
-[PDFDocument isEncrypted]
-[PDFDocument isLocked]
-[PDFDocument unlockWithPassword:]
-[PDFDocument allowsPrinting]
-[PDFDocument allowsCopying]
-[PDFDocument permissionsStatus]
-[PDFDocument string]
-[PDFDocument setDelegate:]
-[PDFDocument delegate]
-[PDFDocument dataRepresentation]
-[PDFDocument dataRepresentationWithOptions:]
-[PDFDocument writeToFile:]
-[PDFDocument writeToFile:withOptions:]
-[PDFDocument writeToURL:]
-[PDFDocument writeToURL:withOptions:]
-[PDFDocument outlineRoot]
-[PDFDocument setOutlineRoot:]
-[PDFDocument outlineItemForSelection:]
-[PDFDocument pageCount]
-[PDFDocument pageAtIndex:]
-[PDFDocument indexForPage:]
-[PDFDocument insertPage:atIndex:]
-[PDFDocument removePageAtIndex:]
-[PDFDocument exchangePageAtIndex:withPageAtIndex:]
-[PDFDocument pageClass]
-[PDFDocument findString:withOptions:]
-[PDFDocument beginFindString:withOptions:]
-[PDFDocument beginFindStrings:withOptions:]
-[PDFDocument findString:fromSelection:withOptions:]
-[PDFDocument didMatchString:]
-[PDFDocument isFinding]
-[PDFDocument cancelFindString]
-[PDFDocument printOperationForPrintInfo:scalingMode:autoRotate:]
-[PDFDocument selectionForEntireDocument]
-[PDFDocument selectionFromPage:atPoint:toPage:atPoint:]
-[PDFDocument selectionFromPage:atCharacterIndex:toPage:atCharacterIndex:]
-[PDFDocument description]
-[PDFDocument(PDFDocumentPriv) findStrings:withinSelection:withOptions:]
-[PDFDocument(PDFDocumentPriv) getPrintOperationForPrintInfo:autoRotate:]
-[PDFDocument(PDFDocumentPriv) cleanupAfterPrintOperation:]
-[PDFDocument(PDFDocumentPriv) setAutoRotate:forPrintOperation:]
-[PDFDocument(PDFDocumentPriv) setPrintScalingMode:forPrintOperation:]
-[PDFDocument(PDFDocumentPriv) hasMarkupAnnotations]
-[PDFDocument(PDFDocumentPriv) hasTextAnnotations]
-[PDFDocument(PDFDocumentPriv) hasOpenPopupAnnotations]
-[PDFDocument(PDFDocumentPriv) setWantsDisplayListCaching:]
-[PDFDocument(PDFDocumentPriv) wantsDisplayListCaching]
-[PDFDocument(PDFDocumentPriv) unsupportedFeatures]
-[PDFDocument(PDFDocumentPriv) preferredPageLayout]
-[PDFDocument(PDFDocumentPriv) preferredPageMode]
-[PDFDocument(PDFDocumentPriv) documentCatalogMetadataForRootPath:withKeys:]
-[PDFDocument(PDFDocumentPriv) setDocumentCatalogMetadata:withNSpace:prefix:rootPath:]
-[PDFDocument(PDFDocumentPriv) newXMPFromData:preserveExistingXMPMetadata:]
___75-[PDFDocument(PDFDocumentPriv) newXMPFromData:preserveExistingXMPMetadata:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PDFDocument(PDFDocumentPriv) dataFromXMP:withRootPath:keys:]
___62-[PDFDocument(PDFDocumentPriv) dataFromXMP:withRootPath:keys:]_block_invoke
___copy_helper_block_660
___destroy_helper_block_661
-[PDFDocument(PDFDocumentInternal) initWithPDFDocumentRef:]
-[PDFDocument(PDFDocumentInternal) commonInit]
-[PDFDocument(PDFDocumentInternal) dataProvider]
-[PDFDocument(PDFDocumentInternal) setDocumentRef:]
-[PDFDocument(PDFDocumentInternal) setUseCorePDF:]
-[PDFDocument(PDFDocumentInternal) useCorePDF]
-[PDFDocument(PDFDocumentInternal) formData]
-[PDFDocument(PDFDocumentInternal) createPageArray]
-[PDFDocument(PDFDocumentInternal) freePDFData]
-[PDFDocument(PDFDocumentInternal) setPageSubrange:]
-[PDFDocument(PDFDocumentInternal) pageSubrange]
-[PDFDocument(PDFDocumentInternal) pageFromPageDictionary:]
-[PDFDocument(PDFDocumentInternal) setPageSortsAnnotations:]
-[PDFDocument(PDFDocumentInternal) pageSortsAnnotations]
-[PDFDocument(PDFDocumentInternal) writeToConsumer:withOptions:]
-[PDFDocument(PDFDocumentInternal) gcCreateInfoDictionary]
-[PDFDocument(PDFDocumentInternal) originalPageCount]
-[PDFDocument(PDFDocumentInternal) indexOfLastPageRemoved]
-[PDFDocument(PDFDocumentInternal) hasText]
-[PDFDocument(PDFDocumentInternal) pageForOriginalIndex:]
-[PDFDocument(PDFDocumentInternal) annotationSubclassForClass:]
-[PDFDocument(PDFDocumentInternal) dataDetector]
-[PDFDocument(PDFDocumentInternal) dataDetectorQueue]
-[PDFDocument(PDFDocumentInternal) enqueueDataDetectionForPage:forPDFView:]
-[PDFDocument(PDFDocumentInternal) pageLayoutThreadQueue]
-[PDFDocument(PDFDocumentInternal) enqueueLayoutThreadForPage:forPDFView:]
-[PDFDocument(PDFDocumentInternal) noteUnsupportedFeature:]
-[PDFDocument(PDFDocumentInternal) selectionFromPage:atPoint:toPage:atPoint:type:]
-[PDFDocument(PDFDocumentInternal) fileRefsValidatorServiceConnection]
___70-[PDFDocument(PDFDocumentInternal) fileRefsValidatorServiceConnection]_block_invoke
-[PDFDocument(PDFDocumentInternal) extendAppSandboxForPageIndex:]
___65-[PDFDocument(PDFDocumentInternal) extendAppSandboxForPageIndex:]_block_invoke
-[PDFDocument(PDFDocumentInternal) normalizeFindOptions:]
-[PDFDocument(PDFDocumentInternal) coreFindString:]
-[PDFDocument(PDFDocumentInternal) coreFindStrings:]
-[PDFDocument(PDFDocumentInternal) scheduledFindOnPage:]
-[PDFDocument(PDFDocumentInternal) cleanupFind]
-[PDFDocument(PDFDocumentInternal) findOnPage]
-[PDFDocument(PDFDocumentInternal) getNearestOutline:forDestination:]
-[PDFDocument(PDFDocumentInternal) PDFDocumentPrintJobTitle:]
-[PDFDocument(PDFDocumentInternal) annotationsForFieldName:]
-[PDFPage init]
-[PDFPage initWithImage:]
-[PDFPage copyWithZone:]
-[PDFPage dealloc]
-[PDFPage document]
-[PDFPage pageRef]
-[PDFPage label]
-[PDFPage boundsForBox:]
-[PDFPage setBounds:forBox:]
-[PDFPage rotation]
-[PDFPage setRotation:]
-[PDFPage annotations]
-[PDFPage displaysAnnotations]
-[PDFPage setDisplaysAnnotations:]
-[PDFPage addAnnotation:]
-[PDFPage removeAnnotation:]
-[PDFPage annotationAtPoint:]
-[PDFPage drawWithBox:]
-[PDFPage transformContextForBox:]
-[PDFPage numberOfCharacters]
-[PDFPage string]
-[PDFPage attributedString]
-[PDFPage characterBoundsAtIndex:]
-[PDFPage characterIndexAtPoint:]
-[PDFPage selectionForRect:]
-[PDFPage selectionForWordAtPoint:]
-[PDFPage selectionForLineAtPoint:]
-[PDFPage selectionFromPoint:toPoint:]
-[PDFPage selectionForRange:]
-[PDFPage dataRepresentation]
-[PDFPage description]
-[PDFPage(PDFPagePrivate) initWithPageRef:]
-[PDFPage(PDFPagePrivate) view]
-[PDFPage(PDFPagePrivate) setView:]
-[PDFPage(PDFPagePrivate) scannedAnnotations]
-[PDFPage(PDFPagePrivate) purgeAll]
-[PDFPage(PDFPagePrivate) drawAnnotationsWithBox:]
-[PDFPage(PDFPagePrivate) drawWithBox:inContext:]
_getHostTime
-[PDFPage(PDFPagePrivate) thumbnailOfSize:forBox:]
-[PDFPage(PDFPagePrivate) unsupportedFeatures]
-[PDFPage(PDFPagePrivate) selectionForCodeRange:]
+[PDFPage(PDFPageInternal) fontWithPDFFont:size:]
-[PDFPage(PDFPageInternal) initWithDocument:]
-[PDFPage(PDFPageInternal) setDocument:]
-[PDFPage(PDFPageInternal) setPageRef:]
-[PDFPage(PDFPageInternal) pageLayoutInvokation]
-[PDFPage(PDFPageInternal) pageLayoutIsSlow]
-[PDFPage(PDFPageInternal) setPageLayoutIsSlow:]
-[PDFPage(PDFPageInternal) pageLayoutIfAvail]
-[PDFPage(PDFPageInternal) setPageLayout:]
-[PDFPage(PDFPageInternal) setThreadFetchingLayout:]
-[PDFPage(PDFPageInternal) threadFetchingLayout]
-[PDFPage(PDFPageInternal) fetchPageLayoutOnThread:]
-[PDFPage(PDFPageInternal) pageLayout]
-[PDFPage(PDFPageInternal) purgePageLayout]
-[PDFPage(PDFPageInternal) setImage:]
-[PDFPage(PDFPageInternal) image]
-[PDFPage(PDFPageInternal) setLabel:]
-[PDFPage(PDFPageInternal) setDrawsPopups:]
-[PDFPage(PDFPageInternal) nativeRotation]
-[PDFPage(PDFPageInternal) transformForBox:]
-[PDFPage(PDFPageInternal) normalizeRect:]
-[PDFPage(PDFPageInternal) hasCropBox]
-[PDFPage(PDFPageInternal) hasBleedBox]
-[PDFPage(PDFPageInternal) hasTrimBox]
-[PDFPage(PDFPageInternal) hasArtBox]
-[PDFPage(PDFPageInternal) writeToConsumer:]
-[PDFPage(PDFPageInternal) noteUnsupportedFeature:]
-[PDFPage(PDFPageInternal) rectangleOfInterestAtPoint:]
-[PDFPage(PDFPageInternal) lazilyLoadAnnotations]
-[PDFPage(PDFPageInternal) lazilyLoadAnnotationsWithView:]
-[PDFPage(PDFPageInternal) getAnnotations]
-[PDFPage(PDFPageInternal) getAnnotationsWithView:]
-[PDFPage(PDFPageInternal) tossAnnotations]
-[PDFPage(PDFPageInternal) resetAnnotations]
-[PDFPage(PDFPageInternal) moveAnnotationToEnd:]
-[PDFPage(PDFPageInternal) sortAnnotations:]
-[PDFPage(PDFPageInternal) addAnnotationFormField:]
-[PDFPage(PDFPageInternal) setDisplaysMarkupAnnotations:]
-[PDFPage(PDFPageInternal) addScannedAnnotation:]
-[PDFPage(PDFPageInternal) scannedAnnotationAtPoint:]
-[PDFPage(PDFPageInternal) hasRunDataDetectors]
-[PDFPage(PDFPageInternal) enqueuedForDataDetection]
-[PDFPage(PDFPageInternal) setEnqueuedForDataDetection:]
-[PDFPage(PDFPageInternal) scanAddedAnnotations]
-[PDFPage(PDFPageInternal) scanData:]
-[PDFPage(PDFPageInternal) getDrawingTransformForBox:]
-[PDFPage(PDFPageInternal) drawBurnedInAnnotationsWithBox:]
-[PDFPage(PDFPageInternal) hasOpenPopups]
-[PDFPage(PDFPageInternal) drawPopupAnnotationsWithBox:]
-[PDFPage(PDFPageInternal) selectionFromPoint:toPoint:type:]
-[PDFPage(PDFPageInternal) selectionForAll]
-[PDFPage(PDFPageInternal) selectionFromTopToPoint:type:]
-[PDFPage(PDFPageInternal) selectionFromPointToBottom:type:]
-[PDFPage(PDFPageInternal) gcCreateBoxDictionary]
-[PDFPage(PDFPageInternal) createDisplayList]
-[PDFPage(PDFPageInternal) releaseDisplayList]
-[PDFPage(PDFPageInternal) lastRenderTime]
-[PDFPage(PDFPageInternal) cacheAttributedString]
-[PDFPage(PDFPageInternal) createAttributedString]
-[PDFPage(PDFPageInternal) createAttributedStringCP]
-[PDFPage(PDFPageInternal) loadTextChars]
-[PDFPage(PDFPageInternal) columnAtPointIfAvailable:]
-[PDFPage(PDFPageInternal) columnAtPoint:]
-[PDFPage(PDFPageInternal) enqueuedForLayout]
-[PDFPage(PDFPageInternal) setEnqueuedForLayout:]
-[PDFPageRange initWithPage:range:]
-[PDFPageRange dealloc]
-[PDFPageRange isEqual:]
-[PDFPageRange page]
-[PDFPageRange setPage:]
-[PDFPageRange range]
-[PDFPageRange setRange:]
-[PDFPageRange description]
-[PDFSelection init]
-[PDFSelection initWithDocument:]
-[PDFSelection copyWithZone:]
-[PDFSelection isEqual:]
-[PDFSelection dealloc]
-[PDFSelection pages]
-[PDFSelection color]
-[PDFSelection setColor:]
-[PDFSelection string]
-[PDFSelection attributedString]
-[PDFSelection boundsForPage:]
-[PDFSelection numberOfTextRangesOnPage:]
-[PDFSelection rangeAtIndex:onPage:]
-[PDFSelection previewRangeAtIndex:onPage:]
-[PDFSelection selectionsByLine]
-[PDFSelection description]
-[PDFSelection addSelection:]
-[PDFSelection addSelections:]
-[PDFSelection extendSelectionAtEnd:]
-[PDFSelection extendSelectionAtStart:]
-[PDFSelection drawForPage:active:]
-[PDFSelection drawForPage:withBox:active:]
-[PDFSelection document]
-[PDFSelection asDestination]
-[PDFSelection isEmpty]
-[PDFSelection compare:]
-[PDFSelection boundsArrayForPage:]
-[PDFSelection subtractSelection:]
-[PDFSelection addCGSelection:forPage:]
-[PDFSelection cgSelections]
-[PDFSelection cgSelectionPages]
-[PDFSelection cgSelectionForPage:]
-[PDFSelection addSelectionNoNormalize:]
-[PDFSelection addSelectionCore:normalize:]
-[PDFSelection addSelectionRange:page:normalize:]
-[PDFSelection subtractSelectionCore:normalize:]
-[PDFSelection indexOfCharactersOnPage:]
-[PDFSelection firstCharCenter]
-[PDFSelection firstPage]
-[PDFSelection lastPage]
-[PDFSelection indexOfFirstCharacterOnPage:]
-[PDFSelection indexOfLastCharacterOnPage:]
-[PDFSelection pdfKitIndexOfFirstCharacterOnPage:]
-[PDFSelection pdfKitIndexOfLastCharacterOnPage:]
-[PDFSelection beginsAndEndsOnWordBoundaries]
-[PDFSelection colorWithCGColor:space:]
-[PDFSelection createAttributedStringForCGSelection:scaled:]
-[PDFSelection attributedStringScaled:]
-[PDFSelection html]
-[PDFSelection webArchive]
-[PDFSelection rtfdData]
-[PDFSelection addRichTypesToPasteboard:]
-[PDFSelection addRTFDToPasteboard:]
-[PDFSelection activeColor]
-[PDFSelection setActiveColor:]
-[PDFSelection inactiveColor]
-[PDFSelection setInactiveColor:]
-[PDFSelection forceBreaks]
-[PDFSelection setForceBreaks:]
-[PDFSelection stringExtendedAtStart:atEnd:]
-[PDFSelection imageRepresentationForPage:scaleFactor:]
-[PDFSelection drawForPage:withBox:active:inContext:]
-[PDFSelection normalize]
__sortCGSelections
__sortPageRanges
-[PDFAction init]
-[PDFAction copyWithZone:]
-[PDFAction dealloc]
-[PDFAction type]
-[PDFAction description]
+[PDFAction(PDFActionPriv) actionWithActionDictionary:forDocument:forPage:]
+[PDFAction(PDFActionPriv) classForActionDictionary:]
-[PDFAction(PDFActionPriv) initWithActionDictionary:forDocument:forPage:]
-[PDFAction(PDFActionPriv) createDictionaryRef]
-[PDFAction(PDFActionPriv) toolTip]
-[PDFAction(PDFActionPriv) toolTipNoLabel]
-[PDFAction(PDFActionPriv) description]
-[PDFAction(PDFActionPriv) commonInit]
-[PDFAction(PDFActionPriv) setNextAction:forDocument:forPage:]
-[PDFAction(PDFActionPriv) setNextActions:forDocument:forPage:]
-[PDFAction(PDFActionPriv) setType:]
-[PDFAction(PDFActionPriv) nextActions]
-[PDFAction(PDFActionPriv) setNextActions:]
-[PDFAction(PDFActionPriv) baseURLForDocument:]
-[PDFActionGoTo init]
-[PDFActionGoTo initWithDestination:]
-[PDFActionGoTo copyWithZone:]
-[PDFActionGoTo dealloc]
-[PDFActionGoTo destination]
-[PDFActionGoTo setDestination:]
-[PDFActionGoTo description]
-[PDFActionGoTo(PDFActionGoToPriv) commonInit]
-[PDFActionGoTo(PDFActionGoToPriv) initWithActionDictionary:forDocument:forPage:]
-[PDFActionGoTo(PDFActionGoToPriv) createDictionaryRef]
-[PDFActionGoTo(PDFActionGoToPriv) addDestinationToDictionaryRef:]
-[PDFActionGoTo(PDFActionGoToPriv) toolTip]
-[PDFActionGoTo(PDFActionGoToPriv) toolTipNoLabel]
-[PDFActionNamed init]
-[PDFActionNamed initWithName:]
-[PDFActionNamed copyWithZone:]
-[PDFActionNamed dealloc]
-[PDFActionNamed name]
-[PDFActionNamed setName:]
-[PDFActionNamed description]
-[PDFActionNamed(PDFActionNamedPriv) commonInit]
-[PDFActionNamed(PDFActionNamedPriv) initWithActionDictionary:forDocument:forPage:]
-[PDFActionNamed(PDFActionNamedPriv) createDictionaryRef]
-[PDFActionNamed(PDFActionNamedPriv) addNameToDictionaryRef:]
-[PDFActionNamed(PDFActionNamedPriv) toolTip]
-[PDFActionURL init]
-[PDFActionURL initWithURL:]
-[PDFActionURL copyWithZone:]
-[PDFActionURL dealloc]
-[PDFActionURL URL]
-[PDFActionURL setURL:]
-[PDFActionURL description]
-[PDFActionURL(PDFActionURLPriv) initWithActionDictionary:forDocument:forPage:]
-[PDFActionURL(PDFActionURLPriv) lazyInit]
-[PDFActionURL(PDFActionURLPriv) finishInitWithActionDictionary:forDocument:]
-[PDFActionURL(PDFActionURLPriv) commonInit]
-[PDFActionURL(PDFActionURLPriv) createDictionaryRef]
-[PDFActionURL(PDFActionURLPriv) toolTip]
-[PDFDestination init]
-[PDFDestination initWithPage:atPoint:]
-[PDFDestination copyWithZone:]
-[PDFDestination dealloc]
-[PDFDestination document]
-[PDFDestination page]
-[PDFDestination point]
-[PDFDestination zoom]
-[PDFDestination setZoom:]
-[PDFDestination compare:]
-[PDFDestination description]
-[PDFDestination(PDFDestinationPriv) initWithDictionary:forDocument:]
_get_number
-[PDFDestination(PDFDestinationPriv) commonInit]
-[PDFDestination(PDFDestinationPriv) setPage:]
-[PDFDestination(PDFDestinationPriv) type]
-[PDFDestination(PDFDestinationPriv) setType:]
-[PDFDestination(PDFDestinationPriv) left]
-[PDFDestination(PDFDestinationPriv) setLeft:]
-[PDFDestination(PDFDestinationPriv) top]
-[PDFDestination(PDFDestinationPriv) setTop:]
-[PDFDestination(PDFDestinationPriv) right]
-[PDFDestination(PDFDestinationPriv) setRight:]
-[PDFDestination(PDFDestinationPriv) bottom]
-[PDFDestination(PDFDestinationPriv) setBottom:]
-[PDFDestination(PDFDestinationPriv) createArrayRef]
-[PDFAccessibilityTableRowModel initWithReadingModel:andParent:andRowIndex:andIndex:]
-[PDFAccessibilityTableRowModel dealloc]
-[PDFAccessibilityTableRowModel isEqual:]
-[PDFAccessibilityTableRowModel hash]
-[PDFAccessibilityTableRowModel parent]
-[PDFAccessibilityTableRowModel index]
-[PDFAccessibilityTableRowModel accessibilityIsIgnored]
-[PDFAccessibilityTableRowModel accessibilityAttributeNames]
-[PDFAccessibilityTableRowModel accessibilityActionNames]
-[PDFAccessibilityTableRowModel pdfView]
-[PDFAccessibilityTableRowModel pdfPage]
-[PDFAccessibilityTableRowModel accessibilityParameterizedAttributeNames]
-[PDFAccessibilityTableRowModel accessibilityRoleAttribute]
-[PDFAccessibilityTableRowModel accessibilityAttributeValue:]
-[PDFAccessibilityTableRowModel accessibilityIsAttributeSettable:]
-[PDFAccessibilityTableRowModel accessibilityHitTest:]
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityIsIgnored]
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityAttributeNames]
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityIsAttributeSettable:]
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityActionNames]
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityActionDescription:]
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityPerformAction:]
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityRoleAttribute]
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityAttributeValue:]
-[PDFAnnotation init]
-[PDFAnnotation initWithBounds:]
-[PDFAnnotation copyWithZone:]
-[PDFAnnotation initWithCoder:]
-[PDFAnnotation encodeWithCoder:]
-[PDFAnnotation dealloc]
-[PDFAnnotation finalize]
-[PDFAnnotation page]
-[PDFAnnotation type]
-[PDFAnnotation shouldDisplay]
-[PDFAnnotation setShouldDisplay:]
-[PDFAnnotation shouldPrint]
-[PDFAnnotation setShouldPrint:]
-[PDFAnnotation contents]
-[PDFAnnotation setContents:]
-[PDFAnnotation bounds]
-[PDFAnnotation setBounds:]
-[PDFAnnotation modificationDate]
-[PDFAnnotation setModificationDate:]
-[PDFAnnotation userName]
-[PDFAnnotation setUserName:]
-[PDFAnnotation popup]
-[PDFAnnotation setPopup:]
-[PDFAnnotation toolTip]
-[PDFAnnotation border]
-[PDFAnnotation setBorder:]
-[PDFAnnotation color]
-[PDFAnnotation setColor:]
-[PDFAnnotation mouseUpAction]
-[PDFAnnotation setMouseUpAction:]
-[PDFAnnotation hasAppearanceStream]
-[PDFAnnotation removeAllAppearanceStreams]
-[PDFAnnotation drawWithBox:]
-[PDFAnnotation description]
-[PDFAnnotation(PDFAnnotationPriv) supportsNSCoding]
-[PDFAnnotation(PDFAnnotationPriv) dictionaryRef]
-[PDFAnnotation(PDFAnnotationPriv) newUserControlWithFrame:]
-[PDFAnnotation(PDFAnnotationPriv) updatesBoundsFromUserControlBounds]
+[PDFAnnotation(PDFAnnotationInternal) classForAnnotationDictionary:]
-[PDFAnnotation(PDFAnnotationInternal) initWithAnnotationDictionary:forPage:]
-[PDFAnnotation(PDFAnnotationInternal) commonInit]
-[PDFAnnotation(PDFAnnotationInternal) secondaryInit]
-[PDFAnnotation(PDFAnnotationInternal) setAccessibilityParent:]
-[PDFAnnotation(PDFAnnotationInternal) accessibilityParent]
-[PDFAnnotation(PDFAnnotationInternal) setPopupInternal:scanPage:]
-[PDFAnnotation(PDFAnnotationInternal) toolTipNoLabel]
-[PDFAnnotation(PDFAnnotationInternal) isHidden]
-[PDFAnnotation(PDFAnnotationInternal) setIsHidden:]
-[PDFAnnotation(PDFAnnotationInternal) forExport]
-[PDFAnnotation(PDFAnnotationInternal) setForExport:]
-[PDFAnnotation(PDFAnnotationInternal) isMarkupAnnotation]
-[PDFAnnotation(PDFAnnotationInternal) mouseDownAction]
-[PDFAnnotation(PDFAnnotationInternal) setMouseDownAction:]
-[PDFAnnotation(PDFAnnotationInternal) moveToFront]
-[PDFAnnotation(PDFAnnotationInternal) getFullFieldNameFromDictionary:]
-[PDFAnnotation(PDFAnnotationInternal) addPageReferenceToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addBoundsToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addFlagsToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addModificationDateToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addTextLabelToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addPopupToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addRGBColor:forKey:toDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addNormalAppearanceToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addAppearanceForKey:toDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addBorderToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addBorderStyleToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addDefaultAppearanceDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addQuaddingToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addActionToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) addAdditionalActionsToDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) setPage:]
-[PDFAnnotation(PDFAnnotationInternal) setType:]
-[PDFAnnotation(PDFAnnotationInternal) sourceDictionary]
-[PDFAnnotation(PDFAnnotationInternal) popupDictionary]
-[PDFAnnotation(PDFAnnotationInternal) flags]
-[PDFAnnotation(PDFAnnotationInternal) appearance:]
-[PDFAnnotation(PDFAnnotationInternal) setSavesAppearanceStream:]
-[PDFAnnotation(PDFAnnotationInternal) savesAppearanceStream]
-[PDFAnnotation(PDFAnnotationInternal) setAppearance:forType:]
-[PDFAnnotation(PDFAnnotationInternal) getAppearancesFromDictionary:ofType:]
_getStreams
-[PDFAnnotation(PDFAnnotationInternal) tokenizeAppearanceString:]
-[PDFAnnotation(PDFAnnotationInternal) pointSizeFromAppearanceTokens:]
-[PDFAnnotation(PDFAnnotationInternal) fontNameFromAppearanceTokens:]
-[PDFAnnotation(PDFAnnotationInternal) colorFromAppearanceTokens:]
-[PDFAnnotation(PDFAnnotationInternal) getFontFromAppearanceString:]
-[PDFAnnotation(PDFAnnotationInternal) getColorFromAppearanceString:]
-[PDFAnnotation(PDFAnnotationInternal) setDictionaryRef:]
-[PDFAnnotation(PDFAnnotationInternal) commonCreateDictionaryRef]
-[PDFAnnotation(PDFAnnotationInternal) drawAppearance:withBox:inContext:]
-[PDFAnnotation(PDFAnnotationInternal) drawAppearance:withBox:inContext:scaleProportional:]
-[PDFAnnotation(PDFAnnotationInternal) drawWithBox:inContext:]
-[PDFAnnotation(PDFAnnotationInternal) derotateContext]
-[PDFAnnotation(PDFAnnotationInternal) transformContext:forBox:]
-[PDFAnnotation(PDFAnnotationInternal) renderString:forRect:font:color:alignment:rotation:breaks:context:]
-[PDFAnnotation(PDFAnnotationInternal) renderString2:forRect:font:color:alignment:rotation:breaks:context:]
-[PDFAnnotation(PDFAnnotationInternal) fillRect:color:context:]
-[PDFAnnotation(PDFAnnotationInternal) strokeRect:color:context:]
-[PDFAnnotation(PDFAnnotationInternal) fillOval:color:context:]
-[PDFAnnotation(PDFAnnotationInternal) strokeOval:color:context:]
-[PDFAnnotation(PDFAnnotationInternal) gcCreateAttributesForFont:color:]
-[PDFAnnotationButtonWidget copyWithZone:]
-[PDFAnnotationButtonWidget dealloc]
-[PDFAnnotationButtonWidget toolTip]
-[PDFAnnotationButtonWidget controlType]
-[PDFAnnotationButtonWidget setControlType:]
-[PDFAnnotationButtonWidget parentID]
-[PDFAnnotationButtonWidget state]
-[PDFAnnotationButtonWidget setState:]
-[PDFAnnotationButtonWidget isHighlighted]
-[PDFAnnotationButtonWidget setHighlighted:]
-[PDFAnnotationButtonWidget allowsToggleToOff]
-[PDFAnnotationButtonWidget setAllowsToggleToOff:]
-[PDFAnnotationButtonWidget backgroundColor]
-[PDFAnnotationButtonWidget setBackgroundColor:]
-[PDFAnnotationButtonWidget font]
-[PDFAnnotationButtonWidget setFont:]
-[PDFAnnotationButtonWidget fontColor]
-[PDFAnnotationButtonWidget setFontColor:]
-[PDFAnnotationButtonWidget caption]
-[PDFAnnotationButtonWidget setCaption:]
-[PDFAnnotationButtonWidget fieldName]
-[PDFAnnotationButtonWidget setFieldName:]
-[PDFAnnotationButtonWidget onStateValue]
-[PDFAnnotationButtonWidget setOnStateValue:]
-[PDFAnnotationButtonWidget initWithAnnotationDictionary:forPage:]
-[PDFAnnotationButtonWidget commonInit]
-[PDFAnnotationButtonWidget secondaryInit]
-[PDFAnnotationButtonWidget drawWithBox:inContext:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) setView:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) appearanceCharacteristics]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) setAppearanceCharacteristics:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) tooltipString]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) setTooltipString:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) rotation]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) setRotation:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) rolloverCaption]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) setRolloverCaption:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) downCaption]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) setDownCaption:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) updateFormData]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) formData]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) drawPushButton:inContext:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) drawRadioButton:inContext:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) drawCheckBox:inContext:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) commonCreateDictionaryRef]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) addNormalAndDownAppearanceToDictionaryRef:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) addNormalAppearanceWithStateToDictionaryRef:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) addNormalAndDownAppearanceWithStateToDictionaryRef:]
-[PDFAnnotationButtonWidget(PDFAnnotationButtonWidgetPriv) accessibilityIsIgnored]
-[PDFAnnotationCircle copyWithZone:]
-[PDFAnnotationCircle initWithCoder:]
-[PDFAnnotationCircle encodeWithCoder:]
-[PDFAnnotationCircle supportsNSCoding]
-[PDFAnnotationCircle dealloc]
-[PDFAnnotationCircle interiorColor]
-[PDFAnnotationCircle setInteriorColor:]
-[PDFAnnotationCircle initWithAnnotationDictionary:forPage:]
-[PDFAnnotationCircle commonInit]
-[PDFAnnotationCircle secondaryInit]
-[PDFAnnotationCircle commonCreateDictionaryRef]
-[PDFAnnotationCircle isMarkupAnnotation]
-[PDFAnnotationCircle drawWithBox:inContext:]
-[PDFAnnotationCircle accessibilityIsIgnored]
-[PDFAnnotationFreeText copyWithZone:]
-[PDFAnnotationFreeText initWithCoder:]
-[PDFAnnotationFreeText encodeWithCoder:]
-[PDFAnnotationFreeText supportsNSCoding]
-[PDFAnnotationFreeText dealloc]
-[PDFAnnotationFreeText font]
-[PDFAnnotationFreeText setFont:]
-[PDFAnnotationFreeText fontColor]
-[PDFAnnotationFreeText setFontColor:]
-[PDFAnnotationFreeText alignment]
-[PDFAnnotationFreeText setAlignment:]
-[PDFAnnotationFreeText initWithAnnotationDictionary:forPage:]
-[PDFAnnotationFreeText commonInit]
-[PDFAnnotationFreeText secondaryInit]
-[PDFAnnotationFreeText commonCreateDictionaryRef]
-[PDFAnnotationFreeText setPage:]
-[PDFAnnotationFreeText controlRepresentation]
-[PDFAnnotationFreeText isMarkupAnnotation]
-[PDFAnnotationFreeText drawWithBox:inContext:]
-[PDFAnnotationFreeText accessibilityIsIgnored]
-[PDFAnnotationInk copyWithZone:]
-[PDFAnnotationInk initWithCoder:]
-[PDFAnnotationInk encodeWithCoder:]
-[PDFAnnotationInk supportsNSCoding]
-[PDFAnnotationInk dealloc]
-[PDFAnnotationInk paths]
-[PDFAnnotationInk addBezierPath:]
-[PDFAnnotationInk removeBezierPath:]
-[PDFAnnotationInk initWithAnnotationDictionary:forPage:]
-[PDFAnnotationInk commonInit]
-[PDFAnnotationInk secondaryInit]
-[PDFAnnotationInk commonCreateDictionaryRef]
-[PDFAnnotationInk isMarkupAnnotation]
-[PDFAnnotationInk drawWithBox:inContext:]
-[PDFAnnotationInk(PDFAnnotationInkPriv) setInkListFromArray:]
-[PDFAnnotationInk(PDFAnnotationInkPriv) releaseCGPathArray]
-[PDFAnnotationInk(PDFAnnotationInkPriv) createCGPathArray]
-[PDFAnnotationInk(PDFAnnotationInkPriv) addInkListToDictionaryRef:]
-[PDFAnnotationInk(PDFAnnotationInkPriv) accessibilityIsIgnored]
-[PDFAnnotationLine copyWithZone:]
-[PDFAnnotationLine initWithCoder:]
-[PDFAnnotationLine encodeWithCoder:]
-[PDFAnnotationLine supportsNSCoding]
-[PDFAnnotationLine dealloc]
-[PDFAnnotationLine startPoint]
-[PDFAnnotationLine setStartPoint:]
-[PDFAnnotationLine endPoint]
-[PDFAnnotationLine setEndPoint:]
-[PDFAnnotationLine startLineStyle]
-[PDFAnnotationLine setStartLineStyle:]
-[PDFAnnotationLine endLineStyle]
-[PDFAnnotationLine setEndLineStyle:]
-[PDFAnnotationLine interiorColor]
-[PDFAnnotationLine setInteriorColor:]
-[PDFAnnotationLine initWithAnnotationDictionary:forPage:]
_getLineStyleFromName
-[PDFAnnotationLine commonInit]
-[PDFAnnotationLine secondaryInit]
-[PDFAnnotationLine commonCreateDictionaryRef]
-[PDFAnnotationLine isMarkupAnnotation]
-[PDFAnnotationLine drawWithBox:inContext:]
-[PDFAnnotationLine(PDFAnnotationLinePriv) drawBulletAtPoint:shape:inContext:]
-[PDFAnnotationLine(PDFAnnotationLinePriv) drawArrowFrom:to:open:inContext:]
-[PDFAnnotationLine(PDFAnnotationLinePriv) addLineToDictionaryRef:]
-[PDFAnnotationLine(PDFAnnotationLinePriv) addLineEndingStylesToDictionaryRef:]
-[PDFAnnotationLine(PDFAnnotationLinePriv) accessibilityIsIgnored]
-[PDFAnnotationLink copyWithZone:]
-[PDFAnnotationLink dealloc]
-[PDFAnnotationLink toolTip]
-[PDFAnnotationLink toolTipNoLabel]
-[PDFAnnotationLink mouseUpAction]
-[PDFAnnotationLink destination]
-[PDFAnnotationLink setDestination:]
-[PDFAnnotationLink URL]
-[PDFAnnotationLink setURL:]
-[PDFAnnotationLink isHighlighted]
-[PDFAnnotationLink setHighlighted:]
-[PDFAnnotationLink initWithAnnotationDictionary:forPage:]
-[PDFAnnotationLink commonInit]
-[PDFAnnotationLink secondaryInit]
-[PDFAnnotationLink commonCreateDictionaryRef]
-[PDFAnnotationLink drawWithBox:inContext:]
-[PDFAnnotationLink(PDFAnnotationLinkPriv) mouseDownStyle]
-[PDFAnnotationLink(PDFAnnotationLinkPriv) setMouseDownStyle:]
-[PDFAnnotationLink(PDFAnnotationLinkPriv) createPillBezier:inContext:]
-[PDFAnnotationLink(PDFAnnotationLinkPriv) addDestinationToDictionaryRef:]
-[PDFAnnotationLink(PDFAnnotationLinkPriv) addHighlightingModeToDictionaryRef:]
-[PDFAccessibilityStaticTextModel initWithReadingModel:andView:andParent:andIndex:]
-[PDFAccessibilityStaticTextModel dealloc]
-[PDFAccessibilityStaticTextModel isEqual:]
-[PDFAccessibilityStaticTextModel hash]
-[PDFAccessibilityStaticTextModel parent]
-[PDFAccessibilityStaticTextModel index]
-[PDFAccessibilityStaticTextModel accessibilityIsIgnored]
-[PDFAccessibilityStaticTextModel accessibilityAttributeNames]
-[PDFAccessibilityStaticTextModel accessibilityParameterizedAttributeNames]
-[PDFAccessibilityStaticTextModel accessibilityRoleAttribute]
-[PDFAccessibilityStaticTextModel accessibilityActionNames]
-[PDFAccessibilityStaticTextModel accessibilityPerformAction:]
-[PDFAccessibilityStaticTextModel accessibilityActionDescription:]
-[PDFAccessibilityStaticTextModel accessibilityIsAttributeSettable:]
-[PDFAccessibilityStaticTextModel accessibilitySetValue:forAttribute:]
-[PDFAccessibilityStaticTextModel accessibilityHitTest:]
-[PDFAccessibilityStaticTextModel accessibilityRoleDescriptionAttribute]
-[PDFAccessibilityStaticTextModel accessibilityAttributeValue:]
-[PDFAccessibilityStaticTextModel accessibilitySelectedTextAttribute]
-[PDFAccessibilityStaticTextModel accessibilityValueAttribute]
-[PDFAccessibilityStaticTextModel accessibilityIsSelectedTextAttributeSettable]
-[PDFAccessibilityStaticTextModel accessibilitySelectedTextRangeAttribute]
-[PDFAccessibilityStaticTextModel accessibilityVisibleCharacterRangeAttribute]
-[PDFAccessibilityStaticTextModel accessibilityIsVisibleCharacterRangeAttributeSettable]
-[PDFAccessibilityStaticTextModel accessibilityLineForIndexAttributeForParameter:]
-[PDFAccessibilityStaticTextModel accessibilityRangeForLineAttributeForParameter:]
-[PDFAccessibilityStaticTextModel accessibilityStringForRangeAttributeForParameter:]
-[PDFAccessibilityStaticTextModel accessibilityBoundsForRangeAttributeForParameter:]
-[PDFAnnotationMarkup copyWithZone:]
-[PDFAnnotationMarkup initWithCoder:]
-[PDFAnnotationMarkup encodeWithCoder:]
-[PDFAnnotationMarkup supportsNSCoding]
-[PDFAnnotationMarkup dealloc]
-[PDFAnnotationMarkup markupType]
-[PDFAnnotationMarkup setMarkupType:]
-[PDFAnnotationMarkup quadrilateralPoints]
-[PDFAnnotationMarkup setQuadrilateralPoints:]
-[PDFAnnotationMarkup initWithAnnotationDictionary:forPage:]
-[PDFAnnotationMarkup commonInit]
-[PDFAnnotationMarkup secondaryInit]
-[PDFAnnotationMarkup commonCreateDictionaryRef]
-[PDFAnnotationMarkup isMarkupAnnotation]
-[PDFAnnotationMarkup drawWithBox:inContext:]
-[PDFAnnotationMarkup(PDFAnnotationMarkupPrivate) setQuadPointsFromArray:]
-[PDFAnnotationMarkup(PDFAnnotationMarkupPrivate) addQuadPointsToDictionaryRef:]
-[PDFAnnotationMarkup(PDFAnnotationMarkupPrivate) accessibilityIsIgnored]
-[PDFAccessibilityTableCellModel initWithReadingModel:andParent:andCell:andIndex:]
-[PDFAccessibilityTableCellModel dealloc]
-[PDFAccessibilityTableCellModel isEqual:]
-[PDFAccessibilityTableCellModel hash]
-[PDFAccessibilityTableCellModel parent]
-[PDFAccessibilityTableCellModel index]
-[PDFAccessibilityTableCellModel accessibilityIsIgnored]
-[PDFAccessibilityTableCellModel accessibilityAttributeNames]
-[PDFAccessibilityTableCellModel accessibilityActionNames]
-[PDFAccessibilityTableCellModel pdfView]
-[PDFAccessibilityTableCellModel pdfPage]
-[PDFAccessibilityTableCellModel accessibilityParameterizedAttributeNames]
-[PDFAccessibilityTableCellModel accessibilityRoleAttribute]
-[PDFAccessibilityTableCellModel accessibilityAttributeValue:]
-[PDFAccessibilityTableCellModel accessibilityIsAttributeSettable:]
-[PDFAccessibilityTableCellModel bounds]
-[PDFAnnotationMovie dealloc]
-[PDFAnnotationMovie aspectRatio]
-[PDFAnnotationMovie initWithAnnotationDictionary:forPage:]
-[PDFAnnotationMovie commonInit]
-[PDFAnnotationMovie secondaryInit]
-[PDFAnnotationMovie drawWithBox:inContext:]
-[PDFAnnotationMovie(PDFAnnotationMoviePriv) setFilePathFromObject:]
-[PDFAnnotationMovie(PDFAnnotationMoviePriv) accessibilityIsIgnored]
-[PDFAnnotationSquare copyWithZone:]
-[PDFAnnotationSquare initWithCoder:]
-[PDFAnnotationSquare encodeWithCoder:]
-[PDFAnnotationSquare supportsNSCoding]
-[PDFAnnotationSquare dealloc]
-[PDFAnnotationSquare interiorColor]
-[PDFAnnotationSquare setInteriorColor:]
-[PDFAnnotationSquare(PDFAnnotationSquarePriv) initWithAnnotationDictionary:forPage:]
-[PDFAnnotationSquare(PDFAnnotationSquarePriv) commonInit]
-[PDFAnnotationSquare(PDFAnnotationSquarePriv) secondaryInit]
-[PDFAnnotationSquare(PDFAnnotationSquarePriv) commonCreateDictionaryRef]
-[PDFAnnotationSquare(PDFAnnotationSquarePriv) isMarkupAnnotation]
-[PDFAnnotationSquare(PDFAnnotationSquarePriv) drawWithBox:inContext:]
-[PDFAnnotationSquare(PDFAnnotationSquarePriv) accessibilityIsIgnored]
-[PDFAnnotationText copyWithZone:]
-[PDFAnnotationText initWithCoder:]
-[PDFAnnotationText encodeWithCoder:]
-[PDFAnnotationText supportsNSCoding]
-[PDFAnnotationText dealloc]
-[PDFAnnotationText windowIsOpen]
-[PDFAnnotationText setWindowIsOpen:]
-[PDFAnnotationText iconType]
-[PDFAnnotationText setIconType:]
-[PDFAnnotationText initWithAnnotationDictionary:forPage:]
-[PDFAnnotationText commonInit]
-[PDFAnnotationText secondaryInit]
-[PDFAnnotationText commonCreateDictionaryRef]
-[PDFAnnotationText isMarkupAnnotation]
-[PDFAnnotationText drawWithBox:inContext:]
-[PDFAnnotationText(PDFAnnotationTextPriv) iconName]
-[PDFAnnotationText(PDFAnnotationTextPriv) setIconName:]
-[PDFAnnotationText(PDFAnnotationTextPriv) drawCommentIcon:inContext:]
-[PDFAnnotationText(PDFAnnotationTextPriv) drawKeyIcon:inContext:]
-[PDFAnnotationText(PDFAnnotationTextPriv) drawNoteIcon:inContext:]
-[PDFAnnotationText(PDFAnnotationTextPriv) drawHelpIcon:inContext:]
-[PDFAnnotationText(PDFAnnotationTextPriv) drawNewParagraphIcon:inContext:]
-[PDFAnnotationText(PDFAnnotationTextPriv) drawParagraphIcon:inContext:]
-[PDFAnnotationText(PDFAnnotationTextPriv) drawInsertIcon:inContext:]
-[PDFAnnotationText(PDFAnnotationTextPriv) addOpenToDictionaryRef:]
-[PDFAnnotationText(PDFAnnotationTextPriv) addNameToDictionaryRef:]
-[PDFAnnotationText(PDFAnnotationTextPriv) accessibilityIsIgnored]
-[PDFAnnotationTextWidget copyWithZone:]
-[PDFAnnotationTextWidget dealloc]
-[PDFAnnotationTextWidget setBorder:]
-[PDFAnnotationTextWidget toolTip]
-[PDFAnnotationTextWidget stringValue]
-[PDFAnnotationTextWidget setStringValue:]
-[PDFAnnotationTextWidget attributedStringValue]
-[PDFAnnotationTextWidget setAttributedStringValue:]
-[PDFAnnotationTextWidget backgroundColor]
-[PDFAnnotationTextWidget setBackgroundColor:]
-[PDFAnnotationTextWidget rotation]
-[PDFAnnotationTextWidget setRotation:]
-[PDFAnnotationTextWidget font]
-[PDFAnnotationTextWidget setFont:]
-[PDFAnnotationTextWidget fontColor]
-[PDFAnnotationTextWidget setFontColor:]
-[PDFAnnotationTextWidget alignment]
-[PDFAnnotationTextWidget setAlignment:]
-[PDFAnnotationTextWidget maximumLength]
-[PDFAnnotationTextWidget setMaximumLength:]
-[PDFAnnotationTextWidget fieldName]
-[PDFAnnotationTextWidget setFieldName:]
-[PDFAnnotationTextWidget initWithAnnotationDictionary:forPage:]
-[PDFAnnotationTextWidget commonInit]
-[PDFAnnotationTextWidget secondaryInit]
-[PDFAnnotationTextWidget drawWithBox:inContext:]
-[PDFAnnotationTextWidget isMultiline]
-[PDFAnnotationTextWidget setIsMultiline:]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) defaultStringValue]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) setDefaultStringValue:]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) isReadOnly]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) setIsReadOnly:]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) appearanceCharacteristics]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) setAppearanceCharacteristics:]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) updateFormData]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) formData]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) addMaxLenToDictionaryRef:]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) commonCreateDictionaryRef]
-[PDFAnnotationTextWidget(PDFAnnotationTextWidgetPriv) accessibilityIsIgnored]
-[PDFBorder init]
-[PDFBorder copyWithZone:]
-[PDFBorder initWithCoder:]
-[PDFBorder encodeWithCoder:]
-[PDFBorder supportsNSCoding]
-[PDFBorder dealloc]
-[PDFBorder description]
-[PDFBorder style]
-[PDFBorder setStyle:]
-[PDFBorder lineWidth]
-[PDFBorder setLineWidth:]
-[PDFBorder horizontalCornerRadius]
-[PDFBorder setHorizontalCornerRadius:]
-[PDFBorder verticalCornerRadius]
-[PDFBorder setVerticalCornerRadius:]
-[PDFBorder dashPattern]
-[PDFBorder setDashPattern:]
-[PDFBorder drawInRect:]
-[PDFBorder(PDFBorderPrivate) initWithAnnotationDictionary:forPage:]
-[PDFBorder(PDFBorderPrivate) createArrayRef]
-[PDFBorder(PDFBorderPrivate) createDictionaryRef]
-[PDFBorder(PDFBorderPrivate) isRectangular]
-[PDFBorder(PDFBorderPrivate) dashPatternRaw]
-[PDFBorder(PDFBorderPrivate) dashCountRaw]
-[PDFBorder(PDFBorderPrivate) drawInRect:inContext:]
-[PDFBorder(PDFBorderPrivate) strokeLineFromPt:toPt:color:context:]
-[PDFBorder(PDFBorderPrivate) setStyleFromDictionary:]
-[PDFBorder(PDFBorderPrivate) setDashFromArray:]
+[NSColor(PDFColorUtilities) deviceRGBColorFromArray:]
-[NSColor(PDFColorUtilities) dictionaryRepresentation]
-[PDFOutputLink initWithPage:point:name:sourcePage:bounds:]
-[PDFOutputLink page]
-[PDFOutputLink point]
-[PDFOutputLink name]
-[PDFOutputLink source]
-[PDFOutputLink bounds]
-[PDFActionResetForm init]
-[PDFActionResetForm copyWithZone:]
-[PDFActionResetForm dealloc]
-[PDFActionResetForm fields]
-[PDFActionResetForm setFields:]
-[PDFActionResetForm fieldsIncludedAreCleared]
-[PDFActionResetForm setFieldsIncludedAreCleared:]
-[PDFActionResetForm description]
-[PDFActionResetForm(PDFActionResetFormPriv) commonInit]
-[PDFActionResetForm(PDFActionResetFormPriv) initWithActionDictionary:forDocument:forPage:]
-[PDFActionResetForm(PDFActionResetFormPriv) createDictionaryRef]
-[PDFActionResetForm(PDFActionResetFormPriv) addFieldsToDictionaryRef:]
-[PDFActionResetForm(PDFActionResetFormPriv) addFlagsToDictionaryRef:]
-[PDFActionResetForm(PDFActionResetFormPriv) toolTip]
-[PDFForm initWithDocument:]
-[PDFForm copyWithZone:]
-[PDFForm dealloc]
-[PDFForm document]
-[PDFForm fieldNames]
-[PDFForm setStringValue:forFieldNamed:]
-[PDFForm stringValueForFieldNamed:]
-[PDFForm defaultStringValueForFieldNamed:]
-[PDFForm defaultDAStringRef]
-[PDFForm addFormField:]
-[PDFForm removeFormFieldWithFieldName:]
-[PDFForm resetFormForFields:]
-[PDFForm resetFormExcludingFields:]
-[PDFForm description]
-[PDFForm(PDFFormPriv) commonResetForm:inclusive:]
-[PDFForm(PDFFormPriv) fieldNamed:]
-[PDFForm(PDFFormPriv) addNeedsAppearanceToDictionaryRef:]
-[PDFForm(PDFFormPriv) createDictionaryRef]
-[PDFForm(PDFFormPriv) setDocument:]
-[PDFFormField initWithAnnotation:]
-[PDFFormField initWithFormDictionary:]
-[PDFFormField commonInit]
-[PDFFormField copyWithZone:]
-[PDFFormField dealloc]
-[PDFFormField clearDictionaryRef]
-[PDFFormField dictionaryRef]
-[PDFFormField createDictionaryRef]
-[PDFFormField setDocument:]
-[PDFFormField document]
-[PDFFormField setFieldType:]
-[PDFFormField fieldType]
-[PDFFormField setButtonType:]
-[PDFFormField buttonType]
-[PDFFormField setFieldName:]
-[PDFFormField fieldName]
-[PDFFormField setStringValue:]
-[PDFFormField stringValue]
-[PDFFormField setDefaultStringValue:]
-[PDFFormField defaultStringValue]
-[PDFFormField setWriteDefaultValue:]
-[PDFFormField writeDefaultValue]
-[PDFFormField description]
-[PDFFormField addFieldTypeToDictionaryRef:]
-[PDFFormField addFieldNameToDictionaryRef:]
-[PDFFormField addNameValueToDictionaryRef:]
-[PDFFormField addStringValueToDictionaryRef:]
-[PDFFormField addNameDefaultValueToDictionaryRef:]
-[PDFFormField addStringDefaultValueToDictionaryRef:]
-[PDFAnnotationChoiceWidget copyWithZone:]
-[PDFAnnotationChoiceWidget dealloc]
-[PDFAnnotationChoiceWidget toolTip]
-[PDFAnnotationChoiceWidget stringValue]
-[PDFAnnotationChoiceWidget setStringValue:]
-[PDFAnnotationChoiceWidget backgroundColor]
-[PDFAnnotationChoiceWidget setBackgroundColor:]
-[PDFAnnotationChoiceWidget font]
-[PDFAnnotationChoiceWidget setFont:]
-[PDFAnnotationChoiceWidget fontColor]
-[PDFAnnotationChoiceWidget setFontColor:]
-[PDFAnnotationChoiceWidget fieldName]
-[PDFAnnotationChoiceWidget setFieldName:]
-[PDFAnnotationChoiceWidget isListChoice]
-[PDFAnnotationChoiceWidget setIsListChoice:]
-[PDFAnnotationChoiceWidget choices]
-[PDFAnnotationChoiceWidget setChoices:]
-[PDFAnnotationChoiceWidget initWithAnnotationDictionary:forPage:]
-[PDFAnnotationChoiceWidget commonInit]
-[PDFAnnotationChoiceWidget secondaryInit]
-[PDFAnnotationChoiceWidget rotation]
-[PDFAnnotationChoiceWidget setRotation:]
-[PDFAnnotationChoiceWidget drawWithBox:inContext:]
-[PDFAnnotationChoiceWidget hitRect]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) options]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) setOptions:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) values]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) setValues:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) textForValue:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) defaultStringValue]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) setDefaultStringValue:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) appearanceCharacteristics]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) setAppearanceCharacteristics:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) updateFormData]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) drawListBox:inContext:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) drawComboBox:inContext:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) drawDisclosureBox:inContext:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) commonCreateDictionaryRef]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) addOptionsToDictionaryRef:]
-[PDFAnnotationChoiceWidget(PDFAnnotationChoiceWidgetPriv) accessibilityIsIgnored]
-[PDFAppearanceCharacteristics init]
-[PDFAppearanceCharacteristics copyWithZone:]
-[PDFAppearanceCharacteristics dealloc]
-[PDFAppearanceCharacteristics backgroundColor]
-[PDFAppearanceCharacteristics setBackgroundColor:]
-[PDFAppearanceCharacteristics borderColor]
-[PDFAppearanceCharacteristics setBorderColor:]
-[PDFAppearanceCharacteristics rotation]
-[PDFAppearanceCharacteristics setRotation:]
-[PDFAppearanceCharacteristics icon]
-[PDFAppearanceCharacteristics setIcon:]
-[PDFAppearanceCharacteristics scaleCircumstance]
-[PDFAppearanceCharacteristics setScaleCircumstance:]
-[PDFAppearanceCharacteristics scaleProportional]
-[PDFAppearanceCharacteristics setScaleProportional:]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) initWithAnnotationDictionary:forFlavor:]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) createDictionaryRef]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) addColor:forKey:toDictionaryRef:]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) flavor]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) setFlavor:]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) caption]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) setCaption:]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) rolloverCaption]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) setRolloverCaption:]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) downCaption]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) setDownCaption:]
-[PDFAppearanceCharacteristics(PDFAppearanceCharacteristicsPriv) accessibilityIsIgnored]
-[PDFAnnotationStamp copyWithZone:]
-[PDFAnnotationStamp dealloc]
-[PDFAnnotationStamp name]
-[PDFAnnotationStamp setName:]
-[PDFAnnotationStamp(PDFAnnotationStampPriv) initWithAnnotationDictionary:forPage:]
-[PDFAnnotationStamp(PDFAnnotationStampPriv) commonInit]
-[PDFAnnotationStamp(PDFAnnotationStampPriv) secondaryInit]
-[PDFAnnotationStamp(PDFAnnotationStampPriv) commonCreateDictionaryRef]
-[PDFAnnotationStamp(PDFAnnotationStampPriv) isMarkupAnnotation]
-[PDFAnnotationStamp(PDFAnnotationStampPriv) drawWithBox:inContext:]
-[PDFAnnotationStamp(PDFAnnotationStampPriv) addNameToDictionaryRef:]
-[PDFAnnotationStamp(PDFAnnotationStampPriv) accessibilityIsIgnored]
-[PDFOutline init]
-[PDFOutline initWithDocument:]
-[PDFOutline dealloc]
-[PDFOutline document]
-[PDFOutline parent]
-[PDFOutline numberOfChildren]
-[PDFOutline index]
-[PDFOutline childAtIndex:]
-[PDFOutline insertChild:atIndex:]
-[PDFOutline removeFromParent]
-[PDFOutline label]
-[PDFOutline setLabel:]
-[PDFOutline isOpen]
-[PDFOutline setIsOpen:]
-[PDFOutline destination]
-[PDFOutline setDestination:]
-[PDFOutline action]
-[PDFOutline setAction:]
-[PDFOutline description]
-[PDFOutline(PDFOutlinePriv) initWithDictionary:forDocument:parent:]
-[PDFOutline(PDFOutlinePriv) lazilyLoadChildren]
-[PDFOutline(PDFOutlinePriv) commonInit]
-[PDFOutline(PDFOutlinePriv) srcDictionaryRef]
-[PDFOutline(PDFOutlinePriv) createDictionaryRef]
-[PDFOutline(PDFOutlinePriv) invalidateDictionaryRef]
-[PDFOutline(PDFOutlinePriv) setDocument:]
-[PDFOutline(PDFOutlinePriv) setParent:]
-[PDFOutline(PDFOutlinePriv) childArray]
-[PDFOutline(PDFOutlinePriv) removeChildAtIndex:]
-[PDFOutline(PDFOutlinePriv) addDestinationToDictionaryRef:]
-[PDFOutline(PDFOutlinePriv) addActionToDictionaryRef:]
-[PDFOutline(PDFOutlinePriv) openDescendantCount]
-[PDFOutline(PDFOutlinePriv) childDictionaryReferencesParent:]
-[PDFOutline(PDFOutlinePriv) next]
-[PDFOutline(PDFOutlinePriv) previous]
-[PDFOutline(PDFOutlinePriv) firstChild]
-[PDFOutline(PDFOutlinePriv) lastChild]
-[PDFAnnotationPopup copyWithZone:]
-[PDFAnnotationPopup initWithCoder:]
-[PDFAnnotationPopup encodeWithCoder:]
-[PDFAnnotationPopup supportsNSCoding]
-[PDFAnnotationPopup dealloc]
-[PDFAnnotationPopup modificationDate]
-[PDFAnnotationPopup setPopup:]
-[PDFAnnotationPopup color]
-[PDFAnnotationPopup shouldPrint]
-[PDFAnnotationPopup contents]
-[PDFAnnotationPopup setContents:]
-[PDFAnnotationPopup isOpen]
-[PDFAnnotationPopup setIsOpen:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) initWithAnnotationDictionary:forPage:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) commonInit]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) secondaryInit]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) commonCreateDictionaryRef]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) addOpenToDictionaryRef:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) drawWithBox:inContext:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) drawInContext:withBounds:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) parent]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) setParent:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) isHighlighted]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) setHighlighted:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) font]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) setFont:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) drawsCloseWidget]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) setDrawsCloseWidget:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) drawsText]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) setDrawsText:]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) controlRepresentation]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) adjustedRectForBox:]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) fillableRectForBounds:]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) titlebarRectForBounds:]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) contentRectForBounds:]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) contentRectForBoundsNoClose:]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) closeboxRectForBounds:]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) extraTextRectForBounds:]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) resizeRectForBounds:]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) minimumWidth]
+[PDFAnnotationPopup(PDFAnnotationPopupPriv) minimumHeight]
-[PDFAnnotationPopup(PDFAnnotationPopupPriv) accessibilityIsIgnored]
-[PDFActionRemoteGoTo init]
-[PDFActionRemoteGoTo initWithPageIndex:atPoint:fileURL:]
-[PDFActionRemoteGoTo copyWithZone:]
-[PDFActionRemoteGoTo dealloc]
-[PDFActionRemoteGoTo pageIndex]
-[PDFActionRemoteGoTo setPageIndex:]
-[PDFActionRemoteGoTo point]
-[PDFActionRemoteGoTo setPoint:]
-[PDFActionRemoteGoTo URL]
-[PDFActionRemoteGoTo setURL:]
-[PDFActionRemoteGoTo description]
-[PDFActionRemoteGoTo(PDFActionRemoteGoToPriv) commonInit]
-[PDFActionRemoteGoTo(PDFActionRemoteGoToPriv) initWithActionDictionary:forDocument:forPage:]
-[PDFActionRemoteGoTo(PDFActionRemoteGoToPriv) lazyInit]
-[PDFActionRemoteGoTo(PDFActionRemoteGoToPriv) finishInitWithActionDictionary:forDocument:]
-[PDFActionRemoteGoTo(PDFActionRemoteGoToPriv) createDictionaryRef]
-[PDFActionRemoteGoTo(PDFActionRemoteGoToPriv) toolTip]
-[PDFActionRemoteGoTo(PDFActionRemoteGoToPriv) toolTipNoLabel]
-[PDFCoachMark initWithContentRect:contentImage:forView:selfDestruct:]
-[PDFCoachMark dealloc]
-[PDFCoachMark expire]
-[PDFCoachMark rectOnScreen]
-[PDFCoachMark _targetViewDidMoveOrChangeSize:]
-[PDFCoachMark animationDidEnd:]
-[PDFCoachMark _animateFadeOut]
-[PDFCoachMark _animatePulse]
-[PDFCoachMark _startPulse]
-[PDFCoachMark _startFadeOut:]
-[PDFFadeOutAnimation setCurrentProgress:]
-[PDFPulseAnimation setCurrentProgress:]
-[PDFCoachMarkView dealloc]
-[PDFCoachMarkView initWithCoach:contentRect:contentImage:]
-[PDFCoachMarkView roundedRect:withRadius:]
-[PDFCoachMarkView contentRect]
-[PDFCoachMarkView _drawGradientInRect:]
__interpolateGradient
-[PDFCoachMarkView drawRect:]
-[PDFCoachMarkView leftBorder]
-[PDFCoachMarkView topBorder]
-[PDFCoachMarkView rightBorder]
-[PDFCoachMarkView bottomBorder]
-[PDFCoachMarkController init]
-[PDFCoachMarkController dealloc]
-[PDFCoachMarkController addCoachMarkWithContentRect:contentImage:forView:selfDestruct:]
-[PDFCoachMarkController cancelCurrentCoachMark]
-[PDFCoachMarkController coachMarkExpired:]
-[PDFCoachMarkController currentCoachMark]
-[PDFDisplayView initWithFrame:]
-[PDFDisplayView dealloc]
-[PDFDisplayView finalize]
-[PDFDisplayView acceptsFirstMouse:]
-[PDFDisplayView acceptsFirstResponder]
-[PDFDisplayView canBecomeKeyView]
-[PDFDisplayView scrollWheel:]
-[PDFDisplayView visibleBoundsInSpaceOfPage:]
-[PDFDisplayView visibleBoundsInSpaceOfPage:forScaleFactor:center:]
-[PDFDisplayView print:]
-[PDFDisplayView setParentPDFView:]
-[PDFDisplayView drawRect:]
-[PDFDisplayView drawPDFHighLevel:]
-[PDFDisplayView setupDrawingState:page:]
-[PDFDisplayView restoreDrawingState:]
-[PDFDisplayView periodicFlushRoutine:]
-[PDFDisplayView flushInterval]
-[PDFDisplayView periodicFlushThreadState]
-[PDFDisplayView setPeriodicFlushThreadState:]
-[PDFDisplayView flushPDFWindow]
-[PDFDisplayView menuForEvent:]
-[PDFDisplayView view:stringForToolTip:point:userData:]
-[PDFDisplayView passwordView]
-[PDFDisplayView loadPasswordNibFile:]
-[PDFDisplayView appendPasswordView]
-[PDFDisplayView removePasswordView]
-[PDFDisplayView passwordEntered:]
-[PDFHUD initForView:]
-[PDFHUD killHUD]
-[PDFHUD setDelegate:]
-[PDFHUD delegate]
-[PDFHUD window]
-[PDFHUD trackingView]
-[PDFHUD setSidebarIsOpen:]
-[PDFHUD hideHUDNow:]
-[PDFHUD pdfViewResized:]
-[PDFHUD displayModeChanged:]
-[PDFHUD documentChanged:]
-[PDFHUD repositionHUDWindow]
-[PDFHUD getProposedHUDFrame]
-[PDFHUD mouseEntered:]
-[PDFHUD mouseExited:]
-[PDFHUD fadeHUDIn]
-[PDFHUD fadeHUDOut]
-[PDFHUD handleAnimationProgress:]
-[PDFHUD animationDidEnd:]
-[PDFHUD resetHUDFadeTimer]
-[PDFHUD hudFadeInTimerElapsed:]
-[PDFHUD hudFadeTimerElapsed:]
+[PDFHUDView hudWidthForControlArray:]
-[PDFHUDView initWithFrame:]
-[PDFHUDView initWithControlArray:]
-[PDFHUDView dealloc]
-[PDFHUDView setHUD:]
-[PDFHUDView removeControl:]
-[PDFHUDView setSidebarState:]
-[PDFHUDView setDisplayModeState:]
-[PDFHUDView addTooltips]
-[PDFHUDView view:stringForToolTip:point:userData:]
-[PDFHUDView boundsForControlAtIndex:]
-[PDFHUDView controlFromPoint:]
-[PDFHUDView isMouseDown]
-[PDFHUDView mouseInHUD]
-[PDFHUDView mouseDown:]
-[PDFHUDView mouseDragged:]
-[PDFHUDView mouseUp:]
-[PDFHUDView performActionForControl:]
-[PDFHUDView getBitmapForControl:active:]
-[PDFHUDView drawRect:]
-[PDFHUDAnimation setCurrentProgress:]
-[PDFHUDWindow wantsScrollWheelEvent:]
-[PDFMatteView setPDFView:]
-[PDFMatteView isFlipped]
-[PDFMatteView isOpaque]
-[PDFMatteView drawRect:]
-[PDFMatteView drawPDFHighLevel:]
-[PDFMatteView rectForSmartMagnificationAtPoint:inRect:]
-[PDFMatteView menuForEvent:]
-[PDFPageTransition initWithPDFView:scaleFactor:offset:ofType:]
-[PDFPageTransition initWithPDFView:fromPage:toPage:ofType:]
-[PDFPageTransition dealloc]
-[PDFPageTransition observeValueForKeyPath:ofObject:change:context:]
-[PDFPageTransition startZoomWithDuration:completionTarget:selector:context:]
-[PDFPageTransition startSwipeWithDuration:completionTarget:selector:context:]
-[PDFPageTransition drawSwipeLayer:inContext:]
-[PDFPageTransition drawWhiteLayer:inContext:]
-[PDFPageTransition drawZoomLayer:inContext:]
-[PDFPageTransition drawLayer:inContext:]
-[PDFPageTransition animationDidStop:finished:]
-[PDFPageTransition(PDFPageTransitionPrivate) overlayWindow]
-[PDFPageTransition(PDFPageTransitionPrivate) calculateZoomLayerGeometry:]
-[PDFPageTransition(PDFPageTransitionPrivate) calculateSwipeLayerGeometry:]
-[PDFTransitionView _CAViewFlags]
-[PDFPopupLayoutInfo maxY]
-[PDFPopupLayoutInfo setMaxY:]
-[PDFPopupLayoutInfo minY]
-[PDFPopupLayoutInfo setMinY:]
-[PDFPopupLayoutInfo popupView]
-[PDFPopupLayoutInfo setPopupView:]
-[PDFPopupLayoutInfo bounds]
-[PDFPopupLayoutInfo setBounds:]
-[PDFPopupLayoutInfo parentBounds]
-[PDFPopupLayoutInfo setParentBounds:]
-[PDFPopupManager initWithPDFView:]
-[PDFPopupManager dealloc]
-[PDFPopupManager popupMouseMoved:]
-[PDFPopupManager popupAnnotationMouseDown:]
-[PDFPopupManager popupAnnotationHit:]
-[PDFPopupManager popupsMayHaveChangedOnPage:]
-[PDFPopupManager scanForPopups]
-[PDFPopupManager clearPopups]
-[PDFPopupManager movePopupToFrontForAnnotation:]
-[PDFPopupManager findVisiblePopups]
-[PDFPopupManager removeAlreadyAccountedForPopups:]
-[PDFPopupManager layoutPopupViews]
-[PDFPopupManager visiblePagesChanged:]
-[PDFPopupManager resizeDisplay:]
-[PDFPopupManager annotationsChanged:]
-[PDFPopupManager documentChanged:]
-[PDFPopupManager popupViewForAnnotation:]
-[PDFPopupManager removePopupView:]
-[PDFPopupManager addPopupView:]
-[PDFPopupManager popupFrameForAnnotation:]
-[PDFPopupManager popupFrameForAnnotation:gutterBounds:]
-[PDFPopupManager positionPopups:inRect:]
-[PDFPopupManager movePopups:atAndBeforeIndex:upBy:gutterBounds:lockedBubbleIndex:]
-[PDFPopupManager popupViewMoveToFront:]
-[PDFPopupManager popupViewClose:]
-[NSString(StringSizingExtension) boundsHeightGivenWidth:font:]
-[PDFPopupView initWithFrame:]
-[PDFPopupView initWithAnnotation:]
-[PDFPopupView isOpaque]
-[PDFPopupView dealloc]
-[PDFPopupView selfDidResize:]
-[PDFPopupView annotation]
-[PDFPopupView editing]
-[PDFPopupView setEditing:]
-[PDFPopupView setDelegate:]
-[PDFPopupView delegate]
-[PDFPopupView addTooltip]
-[PDFPopupView removeTooltip]
-[PDFPopupView view:stringForToolTip:point:userData:]
-[PDFPopupView compareFrameCenters:]
-[PDFPopupView mouseMoved:]
-[PDFPopupView mouseDown:]
-[PDFPopupView trackCloseHit]
-[PDFPopupView mouseDragged:]
-[PDFPopupView mouseUp:]
-[PDFPopupView mouseExited:]
-[PDFPopupView drawRect:]
-[PDFPreviewView initWithFrame:]
-[PDFPreviewView dealloc]
-[PDFPreviewView loadNibFile:]
-[PDFPreviewView pdfView]
-[PDFPreviewView viewWillMoveToWindow:]
-[PDFPreviewView drawRect:]
-[PDFPreviewView(PDFPreviewViewInternal) nextPage:]
-[PDFPreviewView(PDFPreviewViewInternal) previousPage:]
-[PDFPreviewView(PDFPreviewViewInternal) zoomIn:]
-[PDFPreviewView(PDFPreviewViewInternal) autoScale:]
-[PDFPreviewView(PDFPreviewViewInternal) zoomOut:]
-[PDFPreviewView(PDFPreviewViewInternal) singlePage:]
-[PDFPreviewView(PDFPreviewViewInternal) twoPage:]
-[PDFPreviewView(PDFPreviewViewInternal) savePDF:]
-[PDFPreviewView(PDFPreviewViewInternal) launchPreview:]
-[PDFPreviewView(PDFPreviewViewInternal) setWantsLayer:]
-[PDFPrintView dealloc]
-[PDFPrintView setDocument:]
-[PDFPrintView document]
-[PDFPrintView setPrintJobTitle:]
-[PDFPrintView printJobTitle]
-[PDFPrintView knowsPageRange:]
-[PDFPrintView rectForPage:]
-[PDFPrintView drawRect:]
-[PDFScrollView setPDFView:]
-[PDFScrollView reflectScrolledClipView:]
+[PDFScrollView isCompatibleWithResponsiveScrolling]
-[PDFThumbnailView initWithCoder:]
-[PDFThumbnailView initWithFrame:]
-[PDFThumbnailView encodeWithCoder:]
-[PDFThumbnailView dealloc]
-[PDFThumbnailView isOpaque]
-[PDFThumbnailView setPDFView:]
-[PDFThumbnailView PDFView]
-[PDFThumbnailView setThumbnailSize:]
-[PDFThumbnailView thumbnailSize]
-[PDFThumbnailView setMaximumNumberOfColumns:]
-[PDFThumbnailView maximumNumberOfColumns]
-[PDFThumbnailView setLabelFont:]
-[PDFThumbnailView labelFont]
-[PDFThumbnailView setBackgroundColor:]
-[PDFThumbnailView backgroundColor]
-[PDFThumbnailView setAllowsDragging:]
-[PDFThumbnailView allowsDragging]
-[PDFThumbnailView setAllowsMultipleSelection:]
-[PDFThumbnailView allowsMultipleSelection]
-[PDFThumbnailView selectedPages]
-[PDFThumbnailView drawRect:]
-[PDFThumbnailView mouseDown:]
-[PDFThumbnailView keyDown:]
-[PDFThumbnailView acceptsFirstResponder]
-[PDFThumbnailView becomeFirstResponder]
-[PDFThumbnailView resignFirstResponder]
-[PDFThumbnailView delete:]
-[PDFThumbnailView validateUserInterfaceItem:]
-[PDFThumbnailView selectAll:]
-[PDFThumbnailView(PDFThumbnailViewPrivate) setBezeled:]
-[PDFThumbnailView(PDFThumbnailViewPrivate) isBezeled]
-[PDFThumbnailView(PDFThumbnailViewPrivate) setShadowThickness:]
-[PDFThumbnailView(PDFThumbnailViewPrivate) shadowThickness]
-[PDFThumbnailView(PDFThumbnailViewPrivate) documentView]
-[PDFThumbnailView(PDFThumbnailViewInternal) commonInit]
-[PDFThumbnailView(PDFThumbnailViewInternal) numberOfColumns]
-[PDFThumbnailView(PDFThumbnailViewInternal) numberOfRows]
-[PDFThumbnailView(PDFThumbnailViewInternal) numberOfThumbnails]
-[PDFThumbnailView(PDFThumbnailViewInternal) calculateRowsAndColumnsForBlankSize:frameSize:]
-[PDFThumbnailView(PDFThumbnailViewInternal) active]
-[PDFThumbnailView(PDFThumbnailViewInternal) trackMouseDragAllowed:]
-[PDFThumbnailView(PDFThumbnailViewInternal) trackMouseDragDisallowed:]
-[PDFThumbnailView(PDFThumbnailViewInternal) insertionRect]
-[PDFThumbnailView(PDFThumbnailViewInternal) thumbnailAtPoint:]
-[PDFThumbnailView(PDFThumbnailViewInternal) thumbnailToRightOfPoint:]
-[PDFThumbnailView(PDFThumbnailViewInternal) insertionRectFromPoint:]
-[PDFThumbnailView(PDFThumbnailViewInternal) visibleThumbnails]
-[PDFThumbnailView(PDFThumbnailViewInternal) boundsForThumbnail:]
-[PDFThumbnailView(PDFThumbnailViewInternal) setDelegate:]
-[PDFThumbnailView(PDFThumbnailViewInternal) delegate]
-[PDFThumbnailView(PDFThumbnailViewInternal) selectedPageIndex]
-[PDFThumbnailView(PDFThumbnailViewInternal) selectThumbnailAtIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) addPageToSelectedPages:drawNow:]
-[PDFThumbnailView(PDFThumbnailViewInternal) removePageFromSelectedPages:drawNow:]
-[PDFThumbnailView(PDFThumbnailViewInternal) togglePageMembershipInSelectedPages:drawNow:]
-[PDFThumbnailView(PDFThumbnailViewInternal) replaceSelectedPagesWithPageRange:drawNow:]
-[PDFThumbnailView(PDFThumbnailViewInternal) appendSelectedPagesWithPageRange:drawNow:]
-[PDFThumbnailView(PDFThumbnailViewInternal) replaceSelectedPagesWithPage:drawNow:]
-[PDFThumbnailView(PDFThumbnailViewInternal) clearSelectedPagesDrawNow:]
-[PDFThumbnailView(PDFThumbnailViewInternal) redrawSelectedPagesDrawNow:]
-[PDFThumbnailView(PDFThumbnailViewInternal) selectedPagesContainsPage:]
-[PDFThumbnailView(PDFThumbnailViewInternal) boundsForSelectedPages]
-[PDFThumbnailView(PDFThumbnailViewInternal) selectedPagesAreContiguous]
-[PDFThumbnailView(PDFThumbnailViewInternal) documentChangedIfDragSelectedPagesToIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) labelForPage:]
-[PDFThumbnailView(PDFThumbnailViewInternal) pdfView]
-[PDFThumbnailView(PDFThumbnailViewInternal) setPdfView:]
-[PDFThumbnailView(PDFThumbnailViewInternal) scrollSelectionToVisible:]
-[PDFThumbnailView(PDFThumbnailViewInternal) initInternalViews]
-[PDFThumbnailView(PDFThumbnailViewInternal) adjustSubviews]
-[PDFThumbnailView(PDFThumbnailViewInternal) selfDidResize:]
-[PDFThumbnailView(PDFThumbnailViewInternal) pageChanged:]
-[PDFThumbnailView(PDFThumbnailViewInternal) documentChanged:]
-[PDFThumbnailView(PDFThumbnailViewInternal) documentUnlocked:]
-[PDFThumbnailView(PDFThumbnailViewInternal) displayChanged:]
-[PDFThumbnailView(PDFThumbnailViewInternal) usePageLabelsChanged:]
-[PDFThumbnailView(PDFThumbnailViewInternal) didLayoutDocumentView:]
-[PDFThumbnailView(PDFThumbnailViewInternal) annotationsDidChange:]
-[PDFThumbnailView(PDFThumbnailViewInternal) reloadThumbnails]
-[PDFThumbnailView(PDFThumbnailViewInternal) reloadThumbnailAtIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) getThumbnailImage:]
-[PDFThumbnailView(PDFThumbnailViewInternal) generateThumbnailAsync]
-[PDFThumbnailView(PDFThumbnailViewInternal) generateDefaultThumbnail]
-[PDFThumbnailView(PDFThumbnailViewInternal) thumbnailQueue]
-[PDFThumbnailView(PDFThumbnailViewInternal) enqueueThumbnailCreationForIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) generateThumbnailForIndex:]
___72-[PDFThumbnailView(PDFThumbnailViewInternal) generateThumbnailForIndex:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PDFThumbnailView(PDFThumbnailViewInternal) makeThumbnailTopPriority:]
-[PDFThumbnailView(PDFThumbnailViewInternal) createArrays]
-[PDFThumbnailView(PDFThumbnailViewInternal) destroyArrays]
-[PDFThumbnailView(PDFThumbnailViewInternal) thumbnailAtIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) addThumbnail:atIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) thumbnailIsVisible:]
-[PDFThumbnailView(PDFThumbnailViewInternal) shouldBeginDrag:]
-[PDFThumbnailView(PDFThumbnailViewInternal) initiateDrag:]
-[PDFThumbnailView(PDFThumbnailViewInternal) getImageForDrag]
-[PDFThumbnailView(PDFThumbnailViewInternal) draggingToSelf]
-[PDFThumbnailView(PDFThumbnailViewInternal) draggingSourceOperationMaskForLocal:]
-[PDFThumbnailView(PDFThumbnailViewInternal) draggingEntered:]
-[PDFThumbnailView(PDFThumbnailViewInternal) draggingUpdated:]
-[PDFThumbnailView(PDFThumbnailViewInternal) draggingExited:]
-[PDFThumbnailView(PDFThumbnailViewInternal) draggedPageIndex]
-[PDFThumbnailView(PDFThumbnailViewInternal) performDragOperation:]
-[PDFThumbnailView(PDFThumbnailViewInternal) createPageFromImage:atIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) movePages:]
-[PDFThumbnailView(PDFThumbnailViewInternal) removePages:]
-[PDFThumbnailView(PDFThumbnailViewInternal) insertPages:]
-[PDFThumbnailView(PDFThumbnailViewInternal) moveThumbnailFromIndex:toIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) removeThumbnailAtIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) removeThumbnailsAtIndex:count:]
-[PDFThumbnailView(PDFThumbnailViewInternal) insertThumbnailAtIndex:]
-[PDFThumbnailView(PDFThumbnailViewInternal) insertThumbnailsAtIndex:count:]
-[PDFThumbnailDisplayView initWithFrame:]
-[PDFThumbnailDisplayView isFlipped]
-[PDFThumbnailDisplayView drawRect:]
-[PDFThumbnailDisplayView drawThumbnailIndex:inRect:thumbSize:forFont:attributes:]
_NSRoundedRectFill
-[PDFThumbnailDisplayView setParent:]
-[PDFThumbnail initWithImage:]
-[PDFThumbnail setImage:]
-[PDFThumbnail image]
-[PDFThumbnail dealloc]
-[PDFThumbnail setPriority:]
-[PDFThumbnail priority]
-[PDFThumbnail setDirty:]
-[PDFThumbnail dirty]
-[PDFThumbnail setRendering:]
-[PDFThumbnail rendering]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) accessibilityIsIgnored]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) accessibilityAttributeNames]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) accessibilityAttributeValue:]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) accessibilityHitTest:]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) positionValueForAccessibleChildAtIndex:]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) sizeValueForAccessibleChildAtIndex:]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) titleForAccessibleChildAtIndex:]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) performActionForAccessibleChildAtIndex:]
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) setFocusValue:forAccessibleChildAtIndex:]
-[PDFAccessibleThumbnail initWithParent:index:]
-[PDFAccessibleThumbnail dealloc]
-[PDFAccessibleThumbnail isEqual:]
-[PDFAccessibleThumbnail hash]
-[PDFAccessibleThumbnail parent]
-[PDFAccessibleThumbnail index]
-[PDFAccessibleThumbnail accessibilityAttributeNames]
-[PDFAccessibleThumbnail accessibilityAttributeValue:]
-[PDFAccessibleThumbnail accessibilityIsAttributeSettable:]
-[PDFAccessibleThumbnail accessibilitySetValue:forAttribute:]
-[PDFAccessibleThumbnail accessibilityActionNames]
-[PDFAccessibleThumbnail accessibilityActionDescription:]
-[PDFAccessibleThumbnail accessibilityPerformAction:]
-[PDFAccessibleThumbnail accessibilityIsIgnored]
-[PDFAccessibleThumbnail accessibilityHitTest:]
-[PDFAccessibleThumbnail accessibilityFocusedUIElement]
+[PDFView initialize]
-[PDFView valueClassForBinding:]
-[PDFView exposedBindings]
-[PDFView initWithCoder:]
-[PDFView encodeWithCoder:]
-[PDFView initWithFrame:]
-[PDFView dealloc]
-[PDFView finalize]
-[PDFView document]
-[PDFView setDocument:]
-[PDFView canGoToFirstPage]
-[PDFView goToFirstPage:]
-[PDFView canGoToLastPage]
-[PDFView goToLastPage:]
-[PDFView canGoToNextPage]
-[PDFView goToNextPage:]
-[PDFView canGoToPreviousPage]
-[PDFView goToPreviousPage:]
-[PDFView canGoBack]
-[PDFView goBack:]
-[PDFView canGoForward]
-[PDFView goForward:]
-[PDFView currentPage]
-[PDFView goToPage:]
-[PDFView currentDestination]
-[PDFView goToDestination:]
-[PDFView goToSelection:]
-[PDFView goToRect:onPage:]
-[PDFView setDisplayMode:]
-[PDFView displayMode]
-[PDFView setDisplaysPageBreaks:]
-[PDFView displaysPageBreaks]
-[PDFView setDisplayBox:]
-[PDFView displayBox]
-[PDFView setDisplaysAsBook:]
-[PDFView displaysAsBook]
-[PDFView setShouldAntiAlias:]
-[PDFView shouldAntiAlias]
-[PDFView setGreekingThreshold:]
-[PDFView greekingThreshold]
-[PDFView takeBackgroundColorFrom:]
-[PDFView setBackgroundColor:]
-[PDFView backgroundColor]
-[PDFView setInterpolationQuality:]
-[PDFView interpolationQuality]
-[PDFView setDelegate:]
-[PDFView delegate]
-[PDFView setScaleFactor:]
-[PDFView scaleFactor]
-[PDFView _doNotQueryScaleFactor]
-[PDFView PDFViewWillChangeScaleFactor:toScale:]
-[PDFView zoomIn:]
-[PDFView canZoomIn]
-[PDFView zoomOut:]
-[PDFView canZoomOut]
-[PDFView setAutoScales:]
-[PDFView autoScales]
-[PDFView acceptsFirstResponder]
-[PDFView becomeFirstResponder]
-[PDFView resignFirstResponder]
-[PDFView acceptsFirstMouse:]
-[PDFView accessibilityFocusedUIElement]
-[PDFView areaOfInterestForMouse:]
-[PDFView areaOfInterestForPoint:]
-[PDFView setCursorForAreaOfInterest:]
-[PDFView performAction:]
-[PDFView mouseEntered:]
-[PDFView mouseExited:]
-[PDFView mouseMoved:]
-[PDFView mouseDown:]
-[PDFView performKeyEquivalent:]
-[PDFView keyDown:]
-[PDFView magnifyWithEvent:]
-[PDFView wantsScrollEventsForSwipeTrackingOnAxis:]
-[PDFView wantsForwardedScrollEventsForAxis:]
-[PDFView scrollWheel:]
-[PDFView didScrollInScrollView:]
-[PDFView didEndScrollInScrollView:]
-[PDFView swipeWithEvent:]
-[PDFView PDFViewWillClickOnLink:withURL:]
-[PDFView moveToEndOfDocument:]
-[PDFView moveToBeginningOfDocument:]
-[PDFView centerSelectionInVisibleArea:]
-[PDFView scrollPageUp:]
-[PDFView scrollPageDown:]
-[PDFView scrollLineUp:]
-[PDFView scrollLineDown:]
-[PDFView currentSelection]
-[PDFView setCurrentSelection:]
-[PDFView setCurrentSelection:animate:]
-[PDFView clearSelection]
-[PDFView selectAll:]
-[PDFView scrollSelectionToVisible:]
-[PDFView setHighlightedSelections:]
-[PDFView highlightedSelections]
-[PDFView takePasswordFrom:]
-[PDFView updateLayer]
-[PDFView wantsUpdateLayer]
+[PDFView isCompatibleWithResponsiveScrolling]
-[PDFView isOpaque]
-[PDFView drawPage:]
-[PDFView drawPagePost:]
-[PDFView copy:]
-[PDFView printWithInfo:autoRotate:]
-[PDFView printWithInfo:autoRotate:pageScaling:]
-[PDFView printDocument:]
-[PDFView print:]
-[PDFView PDFViewPrintJobTitle:]
-[PDFView pageForPoint:nearest:]
-[PDFView convertPoint:toPage:]
-[PDFView convertRect:toPage:]
-[PDFView convertPoint:fromPage:]
-[PDFView convertRect:fromPage:]
-[PDFView startSpeaking:]
-[PDFView stopSpeaking:]
-[PDFView documentView]
-[PDFView layoutDocumentView]
-[PDFView annotationsChangedOnPage:]
-[PDFView rowSizeForPage:]
-[PDFView setAllowsDragging:]
-[PDFView allowsDragging]
-[PDFView validRequestorForSendType:returnType:]
-[PDFView writeSelectionToPasteboard:types:]
-[PDFView visiblePages]
-[PDFView setEnableDataDetectors:]
-[PDFView enableDataDetectors]
-[PDFView draggingEntered:]
-[PDFView prepareForDragOperation:]
-[PDFView performDragOperation:]
-[PDFView menuForEvent:]
-[PDFView validateUserInterfaceItem:]
-[PDFView quickLookWithEvent:]
-[PDFView validateMenuItem:]
-[PDFView _searchInSpotlight:]
-[PDFView _searchInGoogle:]
-[PDFView _searchInDictionary:]
-[PDFView _setSinglePage:]
-[PDFView _setSinglePageScrolling:]
-[PDFView _setDoublePage:]
-[PDFView _setDoublePageScrolling:]
-[PDFView _setActualSize:]
-[PDFView _setAutoSize:]
-[PDFView(PDFViewPrivate) layoutClass]
-[PDFView(PDFViewPrivate) contentSizeForPage:]
-[PDFView(PDFViewPrivate) autoScaleFactor]
-[PDFView(PDFViewPrivate) setScaleFactor:anchorPoint:]
-[PDFView(PDFViewPrivate) history]
-[PDFView(PDFViewPrivate) currentHistoryIndex]
-[PDFView(PDFViewPrivate) setUsesPageLabels:]
-[PDFView(PDFViewPrivate) usesPageLabels]
-[PDFView(PDFViewPrivate) setDisplaysTooltips:]
-[PDFView(PDFViewPrivate) displaysTooltips]
-[PDFView(PDFViewPrivate) setDisplaysSoloPagesCentered:]
-[PDFView(PDFViewPrivate) displaysSoloPagesCentered]
-[PDFView(PDFViewPrivate) displaysRTL]
-[PDFView(PDFViewPrivate) setBezeled:]
-[PDFView(PDFViewPrivate) isBezeled]
-[PDFView(PDFViewPrivate) setPageColor:]
-[PDFView(PDFViewPrivate) pageColor]
-[PDFView(PDFViewPrivate) setLineWidthThreshold:]
-[PDFView(PDFViewPrivate) lineWidthThreshold]
-[PDFView(PDFViewPrivate) performAXAnnotationHit:]
-[PDFView(PDFViewPrivate) beginEditingAnnotation:]
-[PDFView(PDFViewPrivate) startEditingTextWidgetAnnotation:]
-[PDFView(PDFViewPrivate) endEditingAnnotation]
-[PDFView(PDFViewPrivate) annotationBeingEdited]
-[PDFView(PDFViewPrivate) handleTabInTextWidget:]
-[PDFView(PDFViewPrivate) handleBackTabInTextWidget:]
-[PDFView(PDFViewPrivate) annotationControl]
-[PDFView(PDFViewPrivate) setNeedsDisplayInRect:]
-[PDFView(PDFViewPrivate) setGutterWidth:]
-[PDFView(PDFViewPrivate) gutterWidth]
-[PDFView(PDFViewPrivate) defaultGutterWidth]
-[PDFView(PDFViewPrivate) automaticallyHandleGutter]
-[PDFView(PDFViewPrivate) setDisplaysMarkupAnnotations:]
-[PDFView(PDFViewPrivate) displaysMarkupAnnotations]
-[PDFView(PDFViewPrivate) textSelectCursor]
-[PDFView(PDFViewPrivate) scheduleSyncPageDelay]
-[PDFView(PDFViewPrivate) setPopupManager:]
-[PDFView(PDFViewPrivate) popupManager]
-[PDFView(PDFViewPrivate) activePopupAnnotation]
-[PDFView(PDFViewPrivate) setActivePopupAnnotation:]
-[PDFView(PDFViewPrivate) controllerWillRemoveAnnotationControl:]
-[PDFView(PDFViewPrivate) disableInterpageSpacing]
-[PDFView(PDFViewPrivate) setDisableInterpageSpacing:]
-[PDFView(PDFViewPrivate) scrollingChangesPages]
-[PDFView(PDFViewPrivate) setScrollingChangesPages:]
-[PDFView(PDFViewPrivate) pagesIntersectingRect:]
-[PDFView(PDFViewInternal) commonInit]
-[PDFView(PDFViewInternal) runningWithinInterfaceBuilder]
-[PDFView(PDFViewInternal) loadSamplePDF]
-[PDFView(PDFViewInternal) searchInDictionaryForSelection:]
___59-[PDFView(PDFViewInternal) searchInDictionaryForSelection:]_block_invoke
-[PDFView(PDFViewInternal) resetDocumentState]
-[PDFView(PDFViewInternal) PDFLayout]
-[PDFView(PDFViewInternal) margins]
-[PDFView(PDFViewInternal) trueBackgroundColor]
-[PDFView(PDFViewInternal) matteView]
-[PDFView(PDFViewInternal) viewSizeForPage:]
-[PDFView(PDFViewInternal) normalizedPageBounds:]
-[PDFView(PDFViewInternal) pageViewHeight:]
-[PDFView(PDFViewInternal) pageIsLeftOfAPair:]
-[PDFView(PDFViewInternal) autoScaleFactorForPage:]
-[PDFView(PDFViewInternal) page:isNeighboringPage:]
-[PDFView(PDFViewInternal) setGutterColor:]
-[PDFView(PDFViewInternal) gutterColor]
-[PDFView(PDFViewInternal) setGutterDefaultsToRightSide:]
-[PDFView(PDFViewInternal) gutterDefaultsToRightSide]
-[PDFView(PDFViewInternal) gutterOffsetForPageDisplay]
-[PDFView(PDFViewInternal) gutterBoundsForPage:]
-[PDFView(PDFViewInternal) setDoPeriodicFlush:]
-[PDFView(PDFViewInternal) doPeriodicFlush]
-[PDFView(PDFViewInternal) setPeriodicFlushInterval:]
-[PDFView(PDFViewInternal) periodicFlushInterval]
-[PDFView(PDFViewInternal) doDrawPageContent]
-[PDFView(PDFViewInternal) handleInitialContentRenderSkip]
-[PDFView(PDFViewInternal) scheduledRedisplay:]
-[PDFView(PDFViewInternal) lastPageIndex]
-[PDFView(PDFViewInternal) appendPasswordUI:]
-[PDFView(PDFViewInternal) passwordUIDisplayed]
-[PDFView(PDFViewInternal) documentWasUnlocked:]
-[PDFView(PDFViewInternal) documentAnnotationsChanged:]
-[PDFView(PDFViewInternal) removePasswordUI:]
-[PDFView(PDFViewInternal) nextPage]
-[PDFView(PDFViewInternal) previousPage]
-[PDFView(PDFViewInternal) goToTopOfNextPage:]
-[PDFView(PDFViewInternal) goToBottomOfPreviousPage:]
-[PDFView(PDFViewInternal) pushDestination:]
-[PDFView(PDFViewInternal) goToDestinationNoPush:]
-[PDFView(PDFViewInternal) goToPageNoPush:]
-[PDFView(PDFViewInternal) isRectVisible:onPage:]
-[PDFView(PDFViewInternal) convertPoint:toPage:forScaleFactor:]
-[PDFView(PDFViewInternal) convertRect:toPage:forScaleFactor:]
-[PDFView(PDFViewInternal) convertPoint:fromPage:forScaleFactor:]
-[PDFView(PDFViewInternal) convertRect:fromPage:forScaleFactor:]
-[PDFView(PDFViewInternal) internalSetScaleFactor:]
-[PDFView(PDFViewInternal) slamScaleFactor:]
-[PDFView(PDFViewInternal) maxScaleFactor]
-[PDFView(PDFViewInternal) setMaxScaleFactor:]
-[PDFView(PDFViewInternal) minScaleFactor]
-[PDFView(PDFViewInternal) setMinScaleFactor:]
-[PDFView(PDFViewInternal) magnificationWillChange:]
-[PDFView(PDFViewInternal) magnificationDidChange:]
-[PDFView(PDFViewInternal) observeValueForKeyPath:ofObject:change:context:]
-[PDFView(PDFViewInternal) inhibitDrawing]
-[PDFView(PDFViewInternal) setInhibitDrawing:]
-[PDFView(PDFViewInternal) drawPagePre:]
-[PDFView(PDFViewInternal) drawSelection:forPage:]
-[PDFView(PDFViewInternal) shadowMask]
-[PDFView(PDFViewInternal) setShadowMask:]
-[PDFView(PDFViewInternal) drawShadowedRect:blur:]
-[PDFView(PDFViewInternal) backgroundHasAlpha]
-[PDFView(PDFViewInternal) setAnnotationNeedsDisplay:padding:]
-[PDFView(PDFViewInternal) runDataDetectorsOnVisiblePages]
-[PDFView(PDFViewInternal) initInternalViews]
-[PDFView(PDFViewInternal) setupWindowNotifications:]
-[PDFView(PDFViewInternal) selfDidResize:]
-[PDFView(PDFViewInternal) clipViewBoundsChanged:]
-[PDFView(PDFViewInternal) visiblePagesChanged:]
-[PDFView(PDFViewInternal) windowDidChangeKeyState:]
-[PDFView(PDFViewInternal) reflectNewPageOn]
-[PDFView(PDFViewInternal) scheduleSyncPageIndex:]
-[PDFView(PDFViewInternal) cancelScheduleSyncPageIndex]
-[PDFView(PDFViewInternal) syncPageIndexToScrollView]
-[PDFView(PDFViewInternal) determineCurrentPage]
-[PDFView(PDFViewInternal) pageViewSizeForPage:]
-[PDFView(PDFViewInternal) resizeDisplayView:]
-[PDFView(PDFViewInternal) positionInternalViews:]
-[PDFView(PDFViewInternal) constrainedScrollToPoint:]
-[PDFView(PDFViewInternal) scrollVerticalBy:]
-[PDFView(PDFViewInternal) scrollHorizontalBy:]
-[PDFView(PDFViewInternal) scrollByPage:]
-[PDFView(PDFViewInternal) topOfPage:]
-[PDFView(PDFViewInternal) bottomOfPage:]
-[PDFView(PDFViewInternal) scrollOriginForPageTopLeft:]
-[PDFView(PDFViewInternal) findVisiblePages]
-[PDFView(PDFViewInternal) setPopupsAreEditable:]
-[PDFView(PDFViewInternal) popupsAreEditable]
-[PDFView(PDFViewInternal) hitTestPopupViews:]
-[PDFView(PDFViewInternal) resetPDFTooltips]
-[PDFView(PDFViewInternal) addTooltipsForVisiblePages]
-[PDFView(PDFViewInternal) addTooltipsForPage:]
-[PDFView(PDFViewInternal) scrollToSelection:]
-[PDFView(PDFViewInternal) invalidateSelectionBounds:]
-[PDFView(PDFViewInternal) selectedTextActive]
-[PDFView(PDFViewInternal) internalClearSelection]
-[PDFView(PDFViewInternal) animateLayeredZoomToScaleFactor:offset:origin:]
-[PDFView(PDFViewInternal) animateTransitionFromPage:toPage:]
-[PDFView(PDFViewInternal) endPageTransition:context:]
-[PDFView(PDFViewInternal) scrollEntryPoint]
-[PDFView(PDFViewInternal) shouldAnimateScroll]
-[PDFView(PDFViewInternal) animateNeighboringPageChangeOnly]
-[PDFView(PDFViewInternal) maximumScrollAnimationDistance]
-[PDFView(PDFViewInternal) setAnimateFlag:]
-[PDFView(PDFViewInternal) animateFlag]
-[PDFView(PDFViewInternal) startAnimateZoomToScaleFactor:]
-[PDFView(PDFViewInternal) startAnimationToScaleFactor:finalCenter:onPage:]
-[PDFView(PDFViewInternal) suspendRendering]
-[PDFView(PDFViewInternal) createTransition:forView:]
-[PDFView(PDFViewInternal) createCurrentImageFromView:]
-[PDFView(PDFViewInternal) handleAnimatePageTransition:]
-[PDFView(PDFViewInternal) handleAnimateScrollFromPt:toPt:]
-[PDFView(PDFViewInternal) handleAnimationProgress]
-[PDFView(PDFViewInternal) animationDidEnd:]
-[PDFView(PDFViewInternal) animationDuration]
-[PDFView(PDFViewInternal) stopPDFViewAnimation]
-[PDFView(PDFViewInternal) scrollToBeginningOfDocument:]
-[PDFView(PDFViewInternal) scrollToEndOfDocument:]
-[PDFView(PDFViewInternal) pagesView]
-[PDFViewScrollView scrollWheel:]
-[PDFViewScrollView horizontalScrollElasticity]
-[PDFViewScrollView verticalScrollElasticity]
+[PDFViewScrollView isCompatibleWithResponsiveScrolling]
-[PDFCenteringClipView centerDocument]
-[PDFCenteringClipView constrainBoundsRect:]
-[PDFCenteringClipView documentShouldCenter]
-[PDFCenteringClipView viewBoundsChanged:]
-[PDFCenteringClipView viewFrameChanged:]
-[PDFCenteringClipView setFrame:]
-[PDFCenteringClipView setFrameOrigin:]
-[PDFCenteringClipView setFrameSize:]
-[PDFCenteringClipView setFrameRotation:]
-[PDFCenteringClipView disableCentering]
-[PDFCenteringClipView setDisableCentering:]
-[PDFViewAnimation setCurrentProgress:]
-[NSScrollView(Stuff) documentVisibleRectIncludingContentInsets]
-[PDFDisplayView(PDFViewAccessibility) readingModel]
-[PDFDisplayView(PDFViewAccessibility) initializeAnnotationModel]
-[PDFDisplayView(PDFViewAccessibility) visibleAnnotations]
-[PDFDisplayView(PDFViewAccessibility) visibleTables]
-[PDFDisplayView(PDFViewAccessibility) visibleLists]
-[PDFDisplayView(PDFViewAccessibility) documentAnnotations]
-[PDFDisplayView(PDFViewAccessibility) initializeAccessibility]
-[PDFDisplayView(PDFViewAccessibility) pdfView]
-[PDFDisplayView(PDFViewAccessibility) accessibilityIsIgnored]
-[PDFDisplayView(PDFViewAccessibility) accessibilityFocusedUIElement]
-[PDFDisplayView(PDFViewAccessibility) accessibilityAttributeNames]
-[PDFDisplayView(PDFViewAccessibility) accessibilityAttributeValue:]
-[PDFDisplayView(PDFViewAccessibility) accessibilityHitTest:]
-[PDFDisplayView(PDFViewAccessibility) accessibilityRoleDescriptionAttribute]
-[PDFDisplayView(PDFViewAccessibility) accessibilityValueAttributeOld]
-[PDFDisplayView(PDFViewAccessibility) accessibilitySelectedTextAttributeOld]
-[PDFDisplayView(PDFViewAccessibility) invalidateTextSelection]
-[PDFDisplayView(PDFViewAccessibility) invalidateAccessibilityTable]
-[PDFDisplayView(PDFViewAccessibility) resetReadingModel]
-[PDFAccessibilityListItemModel initWithReadingModel:andParent:andListItem:andIndex:]
-[PDFAccessibilityListItemModel dealloc]
-[PDFAccessibilityListItemModel isEqual:]
-[PDFAccessibilityListItemModel hash]
-[PDFAccessibilityListItemModel parent]
-[PDFAccessibilityListItemModel index]
-[PDFAccessibilityListItemModel accessibilityIsIgnored]
-[PDFAccessibilityListItemModel accessibilityAttributeNames]
-[PDFAccessibilityListItemModel accessibilityActionNames]
-[PDFAccessibilityListItemModel pdfView]
-[PDFAccessibilityListItemModel pdfPage]
-[PDFAccessibilityListItemModel accessibilityParameterizedAttributeNames]
-[PDFAccessibilityListItemModel accessibilityRoleAttribute]
-[PDFAccessibilityListItemModel accessibilityAttributeValue:]
-[PDFAccessibilityListItemModel accessibilityIsAttributeSettable:]
-[PDFAccessibilityListItemModel bounds]
-[PDFAccessibilityListItemModel range]
-[PDFAccessibilityListItemModel contents]
-[PDFAnnotationPolyline copyWithZone:]
-[PDFAnnotationPolyline initWithCoder:]
-[PDFAnnotationPolyline encodeWithCoder:]
-[PDFAnnotationPolyline supportsNSCoding]
-[PDFAnnotationPolyline dealloc]
-[PDFAnnotationPolyline startPoint]
-[PDFAnnotationPolyline setStartPoint:]
-[PDFAnnotationPolyline endPoint]
-[PDFAnnotationPolyline setEndPoint:]
-[PDFAnnotationPolyline startLineStyle]
-[PDFAnnotationPolyline setStartLineStyle:]
-[PDFAnnotationPolyline endLineStyle]
-[PDFAnnotationPolyline setEndLineStyle:]
-[PDFAnnotationPolyline interiorColor]
-[PDFAnnotationPolyline setInteriorColor:]
-[PDFAnnotationPolyline initWithAnnotationDictionary:forPage:]
_getLineStyleFromName
-[PDFAnnotationPolyline commonInit]
-[PDFAnnotationPolyline secondaryInit]
-[PDFAnnotationPolyline commonCreateDictionaryRef]
-[PDFAnnotationPolyline points]
-[PDFAnnotationPolyline isMarkupAnnotation]
-[PDFAnnotationPolyline drawWithBox:inContext:]
-[PDFAnnotationPolyline(PDFAnnotationPolylinePriv) drawBulletAtPoint:shape:inContext:]
-[PDFAnnotationPolyline(PDFAnnotationPolylinePriv) drawArrowFrom:to:open:inContext:]
-[PDFAnnotationPolyline(PDFAnnotationPolylinePriv) addLineToDictionaryRef:]
-[PDFAnnotationPolyline(PDFAnnotationPolylinePriv) addLineEndingStylesToDictionaryRef:]
-[PDFAnnotationPolyline(PDFAnnotationPolylinePriv) accessibilityIsIgnored]
-[PDFViewController initWithView:]
-[PDFViewController dealloc]
-[PDFViewController finalize]
-[PDFViewController documentChanged:]
-[PDFViewController pageChanged:]
-[PDFViewController popupClosing:]
-[PDFViewController documentViewResized:]
-[PDFViewController formChanged:]
-[PDFViewController marqueeBoundsForPage:]
-[PDFViewController mouseDown:]
-[PDFViewController trackMouse:forAnnotation:]
-[PDFViewController handleButtonHit:]
-[PDFViewController annotationHit:]
-[PDFViewController shouldBeginDrag:]
-[PDFViewController dragSelectionWithEvent:]
-[PDFViewController trackStandardTextSelection:]
-[PDFViewController trackMarqueeTextSelection:]
-[PDFViewController recursivelyPerformNextActions:index:count:]
-[PDFViewController choiceMenu:]
-[PDFViewController startEditingTextWidgetAnnotation:]
-[PDFViewController stopEditingAnnotation]
-[PDFViewController userControlForAnnotation:]
-[PDFViewController viewToAddForAnnotation:]
-[PDFViewController addAnnotationControl:]
-[PDFViewController syncTableViewToChoiceAnnotation]
-[PDFViewController controlTextDidEndEditing:]
-[PDFViewController controlTextDidChange:]
-[PDFViewController control:textView:doCommandBySelector:]
-[PDFViewController numberOfRowsInTableView:]
-[PDFViewController tableView:objectValueForTableColumn:row:]
-[PDFViewController tableViewSelectionDidChange:]
-[PDFViewController annotationEditing]
-[PDFViewController annotationControl]
-[PDFViewController activateNextAnnotation:]
-[PDFViewController annotationPreceding:wrapAround:]
-[PDFViewController annotationFollowing:wrapAround:]
-[PDFViewController removeAnnotationControl]
-[PDFViewController doButtonHit:]
-[PDFViewController doTextEntered:]
-[PDFViewController pushTextWidgetUndo]
-[PDFViewLayout init]
-[PDFViewLayout dealloc]
-[PDFViewLayout setDelegate:]
-[PDFViewLayout delegate]
-[PDFViewLayout setDocument:]
-[PDFViewLayout document]
-[PDFViewLayout setPageSubrange:]
-[PDFViewLayout pageSubrange]
-[PDFViewLayout contentSizeWithCurrentPage:]
-[PDFViewLayout visiblePageRangeInBounds:currentPage:]
-[PDFViewLayout visiblePagesInBounds:currentPage:]
-[PDFViewLayout boundsForPage:]
-[PDFViewLayout pageNearestPoint:currentPage:]
-[PDFViewLayout convertPoint:toPage:forScaleFactor:]
-[PDFViewLayout convertPoint:toPage:]
-[PDFViewLayout convertPoint:fromPage:forScaleFactor:]
-[PDFViewLayout convertRect:fromPage:forScaleFactor:]
-[PDFViewLayout convertPoint:fromPage:]
-[PDFViewLayout facingPageForPage:]
-[PDFViewLayout functionalDisplayMode]
-[PDFViewLayout invalidateInternalDocumentGeometry]
-[PDFViewLayout pageCount]
-[PDFViewLayout(PDFViewLayoutInternal) layoutBounds]
-[PDFViewLayout(PDFViewLayoutInternal) layoutOriginForPage:]
-[PDFViewLayout(PDFViewLayoutInternal) normalizedPageBounds:]
-[PDFViewLayout(PDFViewLayoutInternal) generateInternalDocumentGeometry]
-[PDFTileLayer init]
-[PDFTileLayer dealloc]
-[PDFTileLayer setFrame:]
-[PDFTileLayer setDelegate:]
-[PDFTileLayer setContentsScale:]
-[PDFTileLayer setNeedsDisplay]
-[PDFTileLayer selectionLayer]
-[PDFTileLayer findOverlayLayer]
-[PDFTileLayer setWantsFindOverlayLayer:]
-[PDFTileLayer gridX]
-[PDFTileLayer setGridX:]
-[PDFTileLayer gridY]
-[PDFTileLayer setGridY:]
-[PDFTileLayer rendering]
-[PDFTileLayer setRendering:]
-[PDFTileLayer wantsFindOverlayLayer]
-[PDFTileIndex initWithX:Y:]
+[PDFTileIndex indexWithX:Y:]
-[PDFTileIndex x]
-[PDFTileIndex y]
-[PDFTileIndex isEqual:]
-[PDFTileIndex hash]
-[PDFTileIndex copyWithZone:]
-[PDFTileCache rectForTileAtX:Y:]
-[PDFTileCache rectForCoachMark]
-[PDFTileCache tileForPointInLayoutSpace:]
-[PDFTileCache tileGridPointForPointInLayoutSpace:]
-[PDFTileCache tileAtX:Y:]
-[PDFTileCache tileForPointInWindowSpace:]
-[PDFTileCache pointInLayoutSpaceForPointInWindowSpace:]
-[PDFTileCache tilesCoveredForRectInLayoutSpace:]
-[PDFTileCache tileCoverageRectForPointInLayoutSpace:]
-[PDFTileCache tileCoverageRectForPointInWindowSpace:]
-[PDFTileCache tileCoverageRectForTile:]
-[PDFTileCache wantsFindOverlay]
-[PDFTileCache makeLayerForX:Y:]
-[PDFTileCache updateTileFrames]
-[PDFTileCache revalidateTiles]
-[PDFTileCache initWithContainingLayer:]
-[PDFTileCache dealloc]
-[PDFTileCache setFrameSize:]
-[PDFTileCache hudRect]
-[PDFTileCache passwordRect]
-[PDFTileCache shadowMask]
-[PDFTileCache setShadowMask:]
-[PDFTileCache snapshotInContext:]
-[PDFTileCache drawPreviewForPage:inContext:]
-[PDFTileCache setSelectionNeedsDisplay]
-[PDFTileCache setSelectionNeedsDisplayInRect:]
-[PDFTileCache setFindOverlayNeedsDisplay]
-[PDFTileCache setNeedsDisplay]
-[PDFTileCache setNeedsDisplayInRect:]
-[PDFTileCache setNeedsDisplayInRects:]
-[PDFTileCache setHUDNeedsDisplay]
-[PDFTileCache setPasswordNeedsDisplay]
-[PDFTileCache updateCoachMark]
-[PDFTileCache setCoachMarkNeedsDisplay]
-[PDFTileCache automaticScaleFactor]
-[PDFTileCache setDocument:]
-[PDFTileCache scaleFactor]
-[PDFTileCache setScaleFactor:]
-[PDFTileCache setDeviceScaleFactor:]
-[PDFTileCache magnifyWithMagnification:atPoint:immediately:]
-[PDFTileCache zoomTimerFired:]
-[PDFTileCache commitFluidZoomScaleFactor]
-[PDFTileCache scrollWithDelta:]
-[PDFTileCache scrollToPoint:]
-[PDFTileCache pagesIntersectingRect:]
-[PDFTileCache layout]
-[PDFTileCache drawLayer:inContext:]
-[PDFTileCache drawPageContentInContext:]
-[PDFTileCache drawPageSelectionsInContext:usingLayer:]
-[PDFTileCache drawHUDInContext:]
-[PDFTileCache drawCoachMarkInContext:]
-[PDFTileCache fadeInFindOverlay]
-[PDFTileCache animationDidStop:finished:]
-[PDFTileCache fadeOutFindOverlay]
-[PDFTileCache drawFindOverlayInContext:]
-[PDFTileCache drawFindOverlayInContext:onPage:]
-[PDFTileCache fadeOutCoachMarkTimerFired:]
-[PDFTileCache fadeOutCoachMark]
-[PDFTileCache showCoachMark:]
-[PDFTileCache drawPasswordInContext:]
-[PDFTileCache drawShadowedRectInContext:withBounds:]
-[PDFTileCache drawPagePostWithContext:onPage:]
-[PDFTileCache drawSelectionInContext:withSelection:forPage:ofType:]
-[PDFTileCache visibleRect]
-[PDFTileCache scrollOffset]
-[PDFTileCache scrolledVisibleRect]
-[PDFTileCache easeInHUD]
-[PDFTileCache easeOutHUD]
-[PDFTileCache easeInPassword]
-[PDFTileCache easeOutPassword]
-[PDFTileCache document]
-[PDFTileCache deviceScaleFactor]
-[PDFTileCache delegate]
-[PDFTileCache setDelegate:]
-[PDFAccessibilityListModel initWithReadingModel:andView:andParent:andListIndex:andIndex:]
-[PDFAccessibilityListModel dealloc]
-[PDFAccessibilityListModel isEqual:]
-[PDFAccessibilityListModel hash]
-[PDFAccessibilityListModel parent]
-[PDFAccessibilityListModel index]
-[PDFAccessibilityListModel rmList]
-[PDFAccessibilityListModel bounds]
-[PDFAccessibilityListModel pdfView]
-[PDFAccessibilityListModel pdfPage]
-[PDFAccessibilityListModel accessibilityIsIgnored]
-[PDFAccessibilityListModel accessibilityAttributeNames]
-[PDFAccessibilityListModel accessibilityParameterizedAttributeNames]
-[PDFAccessibilityListModel accessibilityRoleAttribute]
-[PDFAccessibilityListModel accessibilityActionNames]
-[PDFAccessibilityListModel accessibilityActionDescription:]
-[PDFAccessibilityListModel accessibilityHitTest:]
-[PDFAccessibilityListModel accessibilityRoleDescriptionAttribute]
-[PDFAccessibilityListModel accessibilityIsAttributeSettable:]
-[PDFAccessibilityListModel accessibilityAttributeValue:]
-[PDFSelectionTrackingData extendingSelection]
-[PDFSelectionTrackingData setExtendingSelection:]
-[PDFSelectionTrackingData selectionMode]
-[PDFSelectionTrackingData setSelectionMode:]
-[PDFSelectionTrackingData startPage]
-[PDFSelectionTrackingData setStartPage:]
-[PDFSelectionTrackingData startPoint]
-[PDFSelectionTrackingData setStartPoint:]
-[PDFSelectionTrackingData marquee]
-[PDFSelectionTrackingData setMarquee:]
-[PDFSelectionTrackingData highlighted]
-[PDFSelectionTrackingData setHighlighted:]
-[PDFSelectionTrackingData annotation]
-[PDFSelectionTrackingData setAnnotation:]
-[PDFLayerController init]
-[PDFLayerController dealloc]
-[PDFLayerController setParentLayer:]
-[PDFLayerController parentLayer]
-[PDFLayerController setDocument:]
-[PDFLayerController displayMode]
-[PDFLayerController setDisplayMode:]
-[PDFLayerController setDisplaysPageBreaks:]
-[PDFLayerController displaysPageBreaks]
-[PDFLayerController margins]
-[PDFLayerController layout]
-[PDFLayerController contentScaleFactor]
-[PDFLayerController setContentScaleFactor:]
-[PDFLayerController tileScaleFactor]
-[PDFLayerController setTileScaleFactor:]
-[PDFLayerController deviceScaleFactor]
-[PDFLayerController setDeviceScaleFactor:]
-[PDFLayerController contentSize]
-[PDFLayerController contentSizeRespectingZoom]
-[PDFLayerController setFrameSize:]
-[PDFLayerController snapshotInContext:]
-[PDFLayerController drawPreviewForPage:inContext:]
-[PDFLayerController magnifyWithMagnification:atPoint:immediately:]
-[PDFLayerController scrollWithDelta:]
-[PDFLayerController scrollPosition]
-[PDFLayerController setScrollPosition:]
-[PDFLayerController mouseDown:]
-[PDFLayerController mouseMoved:]
-[PDFLayerController mouseUp:]
-[PDFLayerController mouseDragged:]
-[PDFLayerController mouseEntered:]
-[PDFLayerController mouseExited:]
-[PDFLayerController rightMouseDown:]
-[PDFLayerController trackMouse:forAnnotation:]
-[PDFLayerController continueTrackingAnnotation:]
-[PDFLayerController finishTrackingAnnotation:]
-[PDFLayerController handleButtonHit:]
-[PDFLayerController annotationHit:]
-[PDFLayerController recursivelyPerformNextActions:index:count:]
-[PDFLayerController performAction:]
-[PDFLayerController doButtonHit:]
-[PDFLayerController shouldBeginDrag:]
-[PDFLayerController dragSelectionWithEvent:]
-[PDFLayerController beginStandardTextSelection:]
-[PDFLayerController continueStandardTextSelection:]
-[PDFLayerController beginMarqueeTextSelection:]
-[PDFLayerController continueMarqueeTextSelection:]
-[PDFLayerController currentSelection]
-[PDFLayerController setCurrentSelection:]
-[PDFLayerController getSelectionForWordAtPoint:]
-[PDFLayerController rectsForSelectionInLayoutSpace:]
-[PDFLayerController highlights]
-[PDFLayerController setHighlights:]
-[PDFLayerController searchSelection]
-[PDFLayerController setSearchSelection:]
-[PDFLayerController setSearchMatches:]
-[PDFLayerController findString:caseSensitive:highlightMatches:]
-[PDFLayerController interactWithAnnotation:]
-[PDFLayerController formChanged:]
-[PDFLayerController input:defaultValue:]
-[PDFLayerController rectsForAnnotationInLayoutSpace:]
-[PDFLayerController boundsForAnnotation:]
-[PDFLayerController keyDown:]
-[PDFLayerController currentPageIndex]
-[PDFLayerController nextPage]
-[PDFLayerController previousPage]
-[PDFLayerController pageDown]
-[PDFLayerController pageUp]
-[PDFLayerController windowDown]
-[PDFLayerController windowUp]
-[PDFLayerController gotoNextPage]
-[PDFLayerController gotoPreviousPage]
-[PDFLayerController gotoLastPage]
-[PDFLayerController gotoFirstPage]
-[PDFLayerController zoomIn:]
-[PDFLayerController zoomOut:]
-[PDFLayerController lastPageIndex]
-[PDFLayerController forceGotoPage:]
-[PDFLayerController gotoPage:]
-[PDFLayerController gotoSelection:]
-[PDFLayerController gotoAnnotation:]
-[PDFLayerController gotoRect:onPage:]
-[PDFLayerController gotoDestination:]
-[PDFLayerController gotoDestinationNoPush:]
-[PDFLayerController findBox:]
-[PDFLayerController beginAutoscroll:]
-[PDFLayerController autoscrollTimerFired:]
-[PDFLayerController continueAutoscroll:]
-[PDFLayerController finishAutoscroll:]
-[PDFLayerController copySelection]
-[PDFLayerController copy:]
-[PDFLayerController selectAll]
-[PDFLayerController inhibitInertialScrollTimer]
-[PDFLayerController inhibitInertialScrollTimerFired:]
-[PDFLayerController determineCurrentPage]
-[PDFLayerController currentPage]
-[PDFLayerController setCurrentPage:]
-[PDFLayerController menuForEvent:]
-[PDFLayerController _performWebSearch:]
-[PDFLayerController _searchInSpotlight:]
-[PDFLayerController _searchInDictionary:]
-[PDFLayerController searchInDictionaryWithSelection:]
-[PDFLayerController _setSinglePage:]
-[PDFLayerController _setSinglePageScrolling:]
-[PDFLayerController _setDoublePage:]
-[PDFLayerController _setDoublePageScrolling:]
-[PDFLayerController _setActualSize:]
-[PDFLayerController _setAutoSize:]
-[PDFLayerController drawHUDInContext:]
-[PDFLayerController setHUDNeedsDisplay]
-[PDFLayerController setHUDEnabled:]
-[PDFLayerController hudEnabled]
-[PDFLayerController saveToPDF]
-[PDFLayerController openWithPreview]
-[PDFLayerController documentIsLocked]
-[PDFLayerController passwordInstruction]
-[PDFLayerController passwordPrompt]
-[PDFLayerController attemptToUnlockWithPassword:]
-[PDFLayerController colorSpace]
-[PDFLayerController frame]
-[PDFLayerController activateNextAnnotation:]
-[PDFLayerController annotationPreceding:wrapAround:]
-[PDFLayerController annotationFollowing:wrapAround:]
-[PDFLayerController document]
-[PDFLayerController delegate]
-[PDFLayerController setDelegate:]
-[PDFLayerController shouldConstrainScrolling]
-[PDFLayerController setShouldConstrainScrolling:]
-[PDFLayerController shouldUseBuiltInFindImplementation]
-[PDFLayerController setShouldUseBuiltInFindImplementation:]
-[PDFLayerController shouldUseBuiltInContextMenuImplementation]
-[PDFLayerController setShouldUseBuiltInContextMenuImplementation:]
-[PDFLayerController shouldUseModalAnnotationEditing]
-[PDFLayerController setShouldUseModalAnnotationEditing:]
-[PDFLayerController searchMatches]
-[PDFBaseLayer init]
-[PDFBaseLayer actionForKey:]
-[PDFBaseLayer incrementRepaintCount]
-[PDFBaseLayer repaintCount]
-[PDFBaseLayer setType:]
-[PDFBaseLayer type]
-[PDFAccessibilityTableModel initWithReadingModel:andView:andParent:andTableIndex:andIndex:]
-[PDFAccessibilityTableModel dealloc]
-[PDFAccessibilityTableModel isEqual:]
-[PDFAccessibilityTableModel hash]
-[PDFAccessibilityTableModel parent]
-[PDFAccessibilityTableModel index]
-[PDFAccessibilityTableModel rmTable]
-[PDFAccessibilityTableModel pdfView]
-[PDFAccessibilityTableModel pdfPage]
-[PDFAccessibilityTableModel accessibilityIsIgnored]
-[PDFAccessibilityTableModel accessibilityAttributeNames]
-[PDFAccessibilityTableModel accessibilityParameterizedAttributeNames]
-[PDFAccessibilityTableModel accessibilityRoleAttribute]
-[PDFAccessibilityTableModel accessibilityActionNames]
-[PDFAccessibilityTableModel accessibilityActionDescription:]
-[PDFAccessibilityTableModel accessibilityHitTest:]
-[PDFAccessibilityTableModel accessibilityRoleDescriptionAttribute]
-[PDFAccessibilityTableModel accessibilityIsAttributeSettable:]
-[PDFAccessibilityTableModel accessibilityAttributeValue:]
-[PDFAccessibilityTableModel accessibilitySetValue:forAttribute:]
-[PDFAccessibilityTableColumnModel initWithReadingModel:andParent:andColumnIndex:andIndex:]
-[PDFAccessibilityTableColumnModel dealloc]
-[PDFAccessibilityTableColumnModel isEqual:]
-[PDFAccessibilityTableColumnModel hash]
-[PDFAccessibilityTableColumnModel parent]
-[PDFAccessibilityTableColumnModel index]
-[PDFAccessibilityTableColumnModel accessibilityIsIgnored]
-[PDFAccessibilityTableColumnModel accessibilityAttributeNames]
-[PDFAccessibilityTableColumnModel accessibilityActionNames]
-[PDFAccessibilityTableColumnModel pdfView]
-[PDFAccessibilityTableColumnModel pdfPage]
-[PDFAccessibilityTableColumnModel accessibilityParameterizedAttributeNames]
-[PDFAccessibilityTableColumnModel accessibilityRoleAttribute]
-[PDFAccessibilityTableColumnModel accessibilityAttributeValue:]
-[PDFAccessibilityTableColumnModel accessibilityIsAttributeSettable:]
-[PDFLayerController(PDFLayerControllerAccessibility) readingModel]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityIsIgnored]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityFocusedUIElement]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityAttributeNames]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityIsAttributeSettable:]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilitySetValue:forAttribute:]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityParameterizedAttributeNames]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityRoleAttribute]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityRoleDescriptionAttribute]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityValueAttribute]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityIsValueAttributeSettable]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilitySelectedTextAttribute]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityIsSelectedTextAttributeSettable]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilitySelectedTextRangeAttribute]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityNumberOfCharactersAttribute]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityIsNumberOfCharactersAttributeSettable]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityVisibleCharacterRangeAttribute]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityIsVisibleCharacterRangeAttributeSettable]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityLineForIndexAttributeForParameter:]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityRangeForLineAttributeForParameter:]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityStringForRangeAttributeForParameter:]
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityBoundsForRangeAttributeForParameter:]
-[PDFLayerController(PDFLayerControllerAccessibility) invalidateTextSelection]
-[PDFLayerController(PDFLayerControllerAccessibility) invalidateAccessibilityTable]
-[PDFHUDLayerController drawInContext:].fillColor
-[PDFHUDLayerController drawInContext:].fillColor67
-[PDFAnnotation(PDFAnnotationInternal) addDefaultAppearanceDictionaryRef:].components
__interpolateGradient.dark
__interpolateGradient.light
-[PDFHUDView drawRect:].fillColor
-[PDFTileCache drawCoachMarkInContext:].locations
-[PDFTileCache drawPasswordInContext:].components
GCC_except_table28
GCC_except_table67
GCC_except_table97
GCC_except_table110
GCC_except_table14
GCC_except_table15
GCC_except_table16
GCC_except_table36
GCC_except_table50
GCC_except_table54
GCC_except_table67
GCC_except_table70
GCC_except_table71
GCC_except_table74
GCC_except_table75
GCC_except_table76
GCC_except_table78
GCC_except_table80
GCC_except_table86
GCC_except_table88
GCC_except_table89
GCC_except_table90
GCC_except_table102
GCC_except_table9
GCC_except_table14
GCC_except_table82
GCC_except_table8
GCC_except_table11
GCC_except_table12
GCC_except_table13
GCC_except_table15
GCC_except_table20
___block_descriptor_tmp
___block_descriptor_tmp190
___block_descriptor_tmp
___block_descriptor_tmp664
___block_descriptor_tmp787
___block_literal_global
___block_descriptor_tmp796
___block_literal_global797
-[PDFCoachMarkView _drawGradientInRect:].callbacks
___block_descriptor_tmp
___block_descriptor_tmp
_OBJC_IVAR_$_PDFDocument._pdfPriv
_OBJC_IVAR_$_PDFPage._pdfPriv
_OBJC_IVAR_$_PDFSelection._pdfPriv
_OBJC_IVAR_$_PDFAction._pdfPriv
_OBJC_IVAR_$_PDFActionGoTo._pdfPriv2
_OBJC_IVAR_$_PDFActionNamed._pdfPriv2
_OBJC_IVAR_$_PDFActionURL._pdfPriv2
_OBJC_IVAR_$_PDFDestination._pdfPriv
_OBJC_IVAR_$_PDFAnnotation._pdfPriv
_OBJC_IVAR_$_PDFAnnotationButtonWidget._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationCircle._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationFreeText._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationInk._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationLine._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationLink._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationMarkup._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationMovie._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationSquare._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationText._pdfPriv2
_OBJC_IVAR_$_PDFAnnotationTextWidget._pdfPriv2
_OBJC_IVAR_$_PDFBorder._pdfPriv
_OBJC_IVAR_$_PDFActionResetForm._pdfPriv2
_OBJC_IVAR_$_PDFForm._pdfPriv
_OBJC_IVAR_$_PDFFormField._pdfPriv
_OBJC_IVAR_$_PDFAnnotationChoiceWidget._pdfPriv2
_OBJC_IVAR_$_PDFAppearanceCharacteristics._pdfPriv
_OBJC_IVAR_$_PDFAnnotationStamp._pdfPriv2
_OBJC_IVAR_$_PDFOutline._pdfPriv
_OBJC_IVAR_$_PDFAnnotationPopup._pdfPriv2
_OBJC_IVAR_$_PDFActionRemoteGoTo._pdfPriv2
_OBJC_IVAR_$_PDFThumbnailView._pdfPriv
_OBJC_IVAR_$_PDFView._pdfPriv
_OBJC_IVAR_$_PDFAnnotationPolyline._pdfPriv2
_OBJC_IVAR_$_PDFViewController._pdfPriv
_OBJC_IVAR_$_PDFViewLayout._pdfPriv
-[PDFDocument(PDFDocumentInternal) extendAppSandboxForPageIndex:].appSandboxExtendedKey
_pdfKitBackgroundGrayColor.backgroundGray
_gTimeBaseFactor
-[PDFAccessibilityTableRowModel accessibilityAttributeNames].attributes
-[PDFAccessibilityTableRowModel accessibilityParameterizedAttributeNames].attributes
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityAttributeNames].attributes
-[PDFAnnotationLink(PDFAnnotationLinkAccessibility) accessibilityActionNames].attributes
-[PDFAccessibilityStaticTextModel accessibilityAttributeNames].attributes
-[PDFAccessibilityStaticTextModel accessibilityParameterizedAttributeNames].attributes
-[PDFAccessibilityTableCellModel accessibilityAttributeNames].attributes
-[PDFAccessibilityTableCellModel accessibilityParameterizedAttributeNames].attributes
-[PDFThumbnailDisplayView(PDFThumbnailViewAccessibility) accessibilityAttributeNames].attributes
-[PDFAccessibleThumbnail accessibilityAttributeNames].attributes
-[PDFView _searchInSpotlight:].__HISearchWindowShow
-[PDFView _searchInSpotlight:].lookedForFunction
-[PDFDisplayView(PDFViewAccessibility) accessibilityAttributeNames].attributes
-[PDFAccessibilityListItemModel accessibilityAttributeNames].attributes
-[PDFAccessibilityListItemModel accessibilityParameterizedAttributeNames].attributes
_pdfBackgroundGrayColor.backgroundGray
-[PDFAccessibilityListModel accessibilityAttributeNames].attributes
-[PDFAccessibilityListModel accessibilityParameterizedAttributeNames].attributes
_pdfShadowMaskLowerLeft.mask
_pdfShadowMaskLowerRight.mask
_pdfShadowMaskLowerCenter.mask
_pdfShadowMaskLeft.mask
_pdfShadowMaskRight.mask
_pdfShadowMaskUpperLeft.mask
_pdfShadowMaskUpperRight.mask
-[PDFAccessibilityTableModel accessibilityAttributeNames].attributes
-[PDFAccessibilityTableModel accessibilityParameterizedAttributeNames].attributes
-[PDFAccessibilityTableColumnModel accessibilityAttributeNames].attributes
-[PDFAccessibilityTableColumnModel accessibilityParameterizedAttributeNames].attributes
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityAttributeNames].attributes
-[PDFLayerController(PDFLayerControllerAccessibility) accessibilityParameterizedAttributeNames].attributes
_BoundsInWindowSpace
_IsCommonlyMappedToNothing
_IsNonAsciiSpace
_OBJC_CLASS_$_PDFAccessibilityListItemModel
_OBJC_CLASS_$_PDFAccessibilityListModel
_OBJC_CLASS_$_PDFAccessibilityStaticTextModel
_OBJC_CLASS_$_PDFAccessibilityTableCellModel
_OBJC_CLASS_$_PDFAccessibilityTableColumnModel
_OBJC_CLASS_$_PDFAccessibilityTableModel
_OBJC_CLASS_$_PDFAccessibilityTableRowModel
_OBJC_CLASS_$_PDFAccessibleThumbnail
_OBJC_CLASS_$_PDFAction
_OBJC_CLASS_$_PDFActionGoTo
_OBJC_CLASS_$_PDFActionGoToPrivateVars
_OBJC_CLASS_$_PDFActionNamed
_OBJC_CLASS_$_PDFActionNamedPrivateVars
_OBJC_CLASS_$_PDFActionPrivateVars
_OBJC_CLASS_$_PDFActionRemoteGoTo
_OBJC_CLASS_$_PDFActionRemoteGoToPrivateVars
_OBJC_CLASS_$_PDFActionResetForm
_OBJC_CLASS_$_PDFActionResetFormPrivateVars
_OBJC_CLASS_$_PDFActionURL
_OBJC_CLASS_$_PDFActionURLPrivateVars
_OBJC_CLASS_$_PDFAnnotation
_OBJC_CLASS_$_PDFAnnotationButtonWidget
_OBJC_CLASS_$_PDFAnnotationButtonWidgetPrivateVars
_OBJC_CLASS_$_PDFAnnotationChoiceWidget
_OBJC_CLASS_$_PDFAnnotationChoiceWidgetPrivateVars
_OBJC_CLASS_$_PDFAnnotationCircle
_OBJC_CLASS_$_PDFAnnotationCirclePrivateVars
_OBJC_CLASS_$_PDFAnnotationFreeText
_OBJC_CLASS_$_PDFAnnotationFreeTextPrivateVars
_OBJC_CLASS_$_PDFAnnotationInk
_OBJC_CLASS_$_PDFAnnotationInkPrivateVars
_OBJC_CLASS_$_PDFAnnotationLine
_OBJC_CLASS_$_PDFAnnotationLinePrivateVars
_OBJC_CLASS_$_PDFAnnotationLink
_OBJC_CLASS_$_PDFAnnotationLinkPrivateVars
_OBJC_CLASS_$_PDFAnnotationMarkup
_OBJC_CLASS_$_PDFAnnotationMarkupPrivateVars
_OBJC_CLASS_$_PDFAnnotationMovie
_OBJC_CLASS_$_PDFAnnotationMoviePrivateVars
_OBJC_CLASS_$_PDFAnnotationPolyline
_OBJC_CLASS_$_PDFAnnotationPolylinePrivateVars
_OBJC_CLASS_$_PDFAnnotationPopup
_OBJC_CLASS_$_PDFAnnotationPopupPrivateVars
_OBJC_CLASS_$_PDFAnnotationPrivateVars
_OBJC_CLASS_$_PDFAnnotationSquare
_OBJC_CLASS_$_PDFAnnotationSquarePrivateVars
_OBJC_CLASS_$_PDFAnnotationStamp
_OBJC_CLASS_$_PDFAnnotationStampPrivateVars
_OBJC_CLASS_$_PDFAnnotationText
_OBJC_CLASS_$_PDFAnnotationTextPrivateVars
_OBJC_CLASS_$_PDFAnnotationTextWidget
_OBJC_CLASS_$_PDFAnnotationTextWidgetPrivateVars
_OBJC_CLASS_$_PDFAppearanceCharacteristics
_OBJC_CLASS_$_PDFAppearanceCharacteristicsPrivateVars
_OBJC_CLASS_$_PDFBaseLayer
_OBJC_CLASS_$_PDFBorder
_OBJC_CLASS_$_PDFBorderPrivateVars
_OBJC_CLASS_$_PDFCenteringClipView
_OBJC_CLASS_$_PDFCoachMark
_OBJC_CLASS_$_PDFCoachMarkController
_OBJC_CLASS_$_PDFCoachMarkView
_OBJC_CLASS_$_PDFDestination
_OBJC_CLASS_$_PDFDestinationPrivateVars
_OBJC_CLASS_$_PDFDisplayView
_OBJC_CLASS_$_PDFDocument
_OBJC_CLASS_$_PDFDocumentPrivateVars
_OBJC_CLASS_$_PDFFadeOutAnimation
_OBJC_CLASS_$_PDFForm
_OBJC_CLASS_$_PDFFormField
_OBJC_CLASS_$_PDFFormFieldPrivateVars
_OBJC_CLASS_$_PDFFormPrivateVars
_OBJC_CLASS_$_PDFHUD
_OBJC_CLASS_$_PDFHUDAnimation
_OBJC_CLASS_$_PDFHUDLayerController
_OBJC_CLASS_$_PDFHUDView
_OBJC_CLASS_$_PDFHUDWindow
_OBJC_CLASS_$_PDFLayerController
_OBJC_CLASS_$_PDFMatteView
_OBJC_CLASS_$_PDFOutline
_OBJC_CLASS_$_PDFOutlinePrivateVars
_OBJC_CLASS_$_PDFOutputLink
_OBJC_CLASS_$_PDFPage
_OBJC_CLASS_$_PDFPagePrivateVars
_OBJC_CLASS_$_PDFPageRange
_OBJC_CLASS_$_PDFPageTransition
_OBJC_CLASS_$_PDFPopupLayoutInfo
_OBJC_CLASS_$_PDFPopupManager
_OBJC_CLASS_$_PDFPopupView
_OBJC_CLASS_$_PDFPreviewView
_OBJC_CLASS_$_PDFPrintView
_OBJC_CLASS_$_PDFPulseAnimation
_OBJC_CLASS_$_PDFScrollView
_OBJC_CLASS_$_PDFSelection
_OBJC_CLASS_$_PDFSelectionPrivateVars
_OBJC_CLASS_$_PDFSelectionTrackingData
_OBJC_CLASS_$_PDFThumbnail
_OBJC_CLASS_$_PDFThumbnailDisplayView
_OBJC_CLASS_$_PDFThumbnailView
_OBJC_CLASS_$_PDFThumbnailViewPrivateVars
_OBJC_CLASS_$_PDFTileCache
_OBJC_CLASS_$_PDFTileIndex
_OBJC_CLASS_$_PDFTileLayer
_OBJC_CLASS_$_PDFTileRenderer
_OBJC_CLASS_$_PDFTileRenderingOperation
_OBJC_CLASS_$_PDFTransitionView
_OBJC_CLASS_$_PDFView
_OBJC_CLASS_$_PDFViewAnimation
_OBJC_CLASS_$_PDFViewController
_OBJC_CLASS_$_PDFViewControllerPrivateVars
_OBJC_CLASS_$_PDFViewLayout
_OBJC_CLASS_$_PDFViewLayoutPrivateVars
_OBJC_CLASS_$_PDFViewPrivateVars
_OBJC_CLASS_$_PDFViewScrollView
_OBJC_IVAR_$_PDFAccessibilityListItemModel._index
_OBJC_IVAR_$_PDFAccessibilityListItemModel._item
_OBJC_IVAR_$_PDFAccessibilityListItemModel._parent
_OBJC_IVAR_$_PDFAccessibilityListItemModel._readingModel
_OBJC_IVAR_$_PDFAccessibilityListModel._childIndex
_OBJC_IVAR_$_PDFAccessibilityListModel._children
_OBJC_IVAR_$_PDFAccessibilityListModel._index
_OBJC_IVAR_$_PDFAccessibilityListModel._listIndex
_OBJC_IVAR_$_PDFAccessibilityListModel._parent
_OBJC_IVAR_$_PDFAccessibilityListModel._pdfPage
_OBJC_IVAR_$_PDFAccessibilityListModel._pdfView
_OBJC_IVAR_$_PDFAccessibilityListModel._readingModel
_OBJC_IVAR_$_PDFAccessibilityStaticTextModel._index
_OBJC_IVAR_$_PDFAccessibilityStaticTextModel._parent
_OBJC_IVAR_$_PDFAccessibilityStaticTextModel._pdfView
_OBJC_IVAR_$_PDFAccessibilityStaticTextModel._readingModel
_OBJC_IVAR_$_PDFAccessibilityTableCellModel._cell
_OBJC_IVAR_$_PDFAccessibilityTableCellModel._index
_OBJC_IVAR_$_PDFAccessibilityTableCellModel._parent
_OBJC_IVAR_$_PDFAccessibilityTableCellModel._readingModel
_OBJC_IVAR_$_PDFAccessibilityTableColumnModel._cells
_OBJC_IVAR_$_PDFAccessibilityTableColumnModel._columnIndex
_OBJC_IVAR_$_PDFAccessibilityTableColumnModel._index
_OBJC_IVAR_$_PDFAccessibilityTableColumnModel._parent
_OBJC_IVAR_$_PDFAccessibilityTableColumnModel._readingModel
_OBJC_IVAR_$_PDFAccessibilityTableModel._childIndex
_OBJC_IVAR_$_PDFAccessibilityTableModel._columnChildren
_OBJC_IVAR_$_PDFAccessibilityTableModel._index
_OBJC_IVAR_$_PDFAccessibilityTableModel._orderedByRow
_OBJC_IVAR_$_PDFAccessibilityTableModel._parent
_OBJC_IVAR_$_PDFAccessibilityTableModel._pdfPage
_OBJC_IVAR_$_PDFAccessibilityTableModel._pdfView
_OBJC_IVAR_$_PDFAccessibilityTableModel._readingModel
_OBJC_IVAR_$_PDFAccessibilityTableModel._rowChildren
_OBJC_IVAR_$_PDFAccessibilityTableModel._tableIndex
_OBJC_IVAR_$_PDFAccessibilityTableRowModel._cells
_OBJC_IVAR_$_PDFAccessibilityTableRowModel._index
_OBJC_IVAR_$_PDFAccessibilityTableRowModel._parent
_OBJC_IVAR_$_PDFAccessibilityTableRowModel._readingModel
_OBJC_IVAR_$_PDFAccessibilityTableRowModel._rowIndex
_OBJC_IVAR_$_PDFAccessibleThumbnail._index
_OBJC_IVAR_$_PDFAccessibleThumbnail._parent
_OBJC_IVAR_$_PDFActionGoToPrivateVars.destination
_OBJC_IVAR_$_PDFActionNamedPrivateVars.name
_OBJC_IVAR_$_PDFActionPrivateVars.nextActions
_OBJC_IVAR_$_PDFActionPrivateVars.type
_OBJC_IVAR_$_PDFActionRemoteGoToPrivateVars.lazyInitDictionary
_OBJC_IVAR_$_PDFActionRemoteGoToPrivateVars.lazyInitDocument
_OBJC_IVAR_$_PDFActionRemoteGoToPrivateVars.lazyInitPageIndex
_OBJC_IVAR_$_PDFActionRemoteGoToPrivateVars.pageIndex
_OBJC_IVAR_$_PDFActionRemoteGoToPrivateVars.point
_OBJC_IVAR_$_PDFActionRemoteGoToPrivateVars.url
_OBJC_IVAR_$_PDFActionResetFormPrivateVars.fields
_OBJC_IVAR_$_PDFActionResetFormPrivateVars.included
_OBJC_IVAR_$_PDFActionURLPrivateVars.lazyInitDictionary
_OBJC_IVAR_$_PDFActionURLPrivateVars.lazyInitDocument
_OBJC_IVAR_$_PDFActionURLPrivateVars.lazyInitPageIndex
_OBJC_IVAR_$_PDFActionURLPrivateVars.url
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.appearanceChars
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.controlType
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.dictionary
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.fieldFlags
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.fieldName
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.font
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.fontColor
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.highlight
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.onState
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.parentID
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.pdfView
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.state
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.stringValue
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.tooltipString
_OBJC_IVAR_$_PDFAnnotationButtonWidgetPrivateVars.trackingArea
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.appearanceChars
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.defaultStringValue
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.dictionary
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.fieldFlags
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.fieldName
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.font
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.fontColor
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.isList
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.options
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.stringValue
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.userName
_OBJC_IVAR_$_PDFAnnotationChoiceWidgetPrivateVars.values
_OBJC_IVAR_$_PDFAnnotationCirclePrivateVars.interiorColor
_OBJC_IVAR_$_PDFAnnotationFreeTextPrivateVars.alignment
_OBJC_IVAR_$_PDFAnnotationFreeTextPrivateVars.font
_OBJC_IVAR_$_PDFAnnotationFreeTextPrivateVars.fontColor
_OBJC_IVAR_$_PDFAnnotationInkPrivateVars.cgPaths
_OBJC_IVAR_$_PDFAnnotationInkPrivateVars.paths
_OBJC_IVAR_$_PDFAnnotationLinePrivateVars.endLineStyle
_OBJC_IVAR_$_PDFAnnotationLinePrivateVars.endPt
_OBJC_IVAR_$_PDFAnnotationLinePrivateVars.interiorColor
_OBJC_IVAR_$_PDFAnnotationLinePrivateVars.startLineStyle
_OBJC_IVAR_$_PDFAnnotationLinePrivateVars.startPt
_OBJC_IVAR_$_PDFAnnotationLinkPrivateVars.destination
_OBJC_IVAR_$_PDFAnnotationLinkPrivateVars.highlight
_OBJC_IVAR_$_PDFAnnotationLinkPrivateVars.style
_OBJC_IVAR_$_PDFAnnotationLinkPrivateVars.url
_OBJC_IVAR_$_PDFAnnotationMarkupPrivateVars.markupType
_OBJC_IVAR_$_PDFAnnotationMarkupPrivateVars.quadPoints
_OBJC_IVAR_$_PDFAnnotationMoviePrivateVars.aspect
_OBJC_IVAR_$_PDFAnnotationPolylinePrivateVars.endLineStyle
_OBJC_IVAR_$_PDFAnnotationPolylinePrivateVars.endPt
_OBJC_IVAR_$_PDFAnnotationPolylinePrivateVars.interiorColor
_OBJC_IVAR_$_PDFAnnotationPolylinePrivateVars.points
_OBJC_IVAR_$_PDFAnnotationPolylinePrivateVars.startLineStyle
_OBJC_IVAR_$_PDFAnnotationPolylinePrivateVars.startPt
_OBJC_IVAR_$_PDFAnnotationPopupPrivateVars.drawCloseWidget
_OBJC_IVAR_$_PDFAnnotationPopupPrivateVars.drawText
_OBJC_IVAR_$_PDFAnnotationPopupPrivateVars.font
_OBJC_IVAR_$_PDFAnnotationPopupPrivateVars.highlight
_OBJC_IVAR_$_PDFAnnotationPopupPrivateVars.isOpen
_OBJC_IVAR_$_PDFAnnotationPopupPrivateVars.parent
_OBJC_IVAR_$_PDFAnnotationPrivateVars.accessibilityParent
_OBJC_IVAR_$_PDFAnnotationPrivateVars.action
_OBJC_IVAR_$_PDFAnnotationPrivateVars.border
_OBJC_IVAR_$_PDFAnnotationPrivateVars.bounds
_OBJC_IVAR_$_PDFAnnotationPrivateVars.color
_OBJC_IVAR_$_PDFAnnotationPrivateVars.contents
_OBJC_IVAR_$_PDFAnnotationPrivateVars.dictionary
_OBJC_IVAR_$_PDFAnnotationPrivateVars.dictionaryRef
_OBJC_IVAR_$_PDFAnnotationPrivateVars.downAction
_OBJC_IVAR_$_PDFAnnotationPrivateVars.downAppearance
_OBJC_IVAR_$_PDFAnnotationPrivateVars.downOffAppearance
_OBJC_IVAR_$_PDFAnnotationPrivateVars.export
_OBJC_IVAR_$_PDFAnnotationPrivateVars.flags
_OBJC_IVAR_$_PDFAnnotationPrivateVars.modificationDate
_OBJC_IVAR_$_PDFAnnotationPrivateVars.normalAppearance
_OBJC_IVAR_$_PDFAnnotationPrivateVars.normalOffAppearance
_OBJC_IVAR_$_PDFAnnotationPrivateVars.page
_OBJC_IVAR_$_PDFAnnotationPrivateVars.popup
_OBJC_IVAR_$_PDFAnnotationPrivateVars.popupDictionary
_OBJC_IVAR_$_PDFAnnotationPrivateVars.rolloverAppearance
_OBJC_IVAR_$_PDFAnnotationPrivateVars.rolloverOffAppearance
_OBJC_IVAR_$_PDFAnnotationPrivateVars.saveAppearance
_OBJC_IVAR_$_PDFAnnotationPrivateVars.textString
_OBJC_IVAR_$_PDFAnnotationPrivateVars.type
_OBJC_IVAR_$_PDFAnnotationSquarePrivateVars.interiorColor
_OBJC_IVAR_$_PDFAnnotationStampPrivateVars.name
_OBJC_IVAR_$_PDFAnnotationTextPrivateVars.iconName
_OBJC_IVAR_$_PDFAnnotationTextPrivateVars.iconType
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.alignment
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.appearanceChars
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.defaultStringValue
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.dictionary
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.fieldFlags
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.fieldName
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.font
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.fontColor
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.maximumLength
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.stringValue
_OBJC_IVAR_$_PDFAnnotationTextWidgetPrivateVars.userName
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.backgroundColor
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.borderColor
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.caption
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.downCaption
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.flavor
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.icon
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.rolloverCaption
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.rotation
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.scaleCircumstance
_OBJC_IVAR_$_PDFAppearanceCharacteristicsPrivateVars.scaleProportional
_OBJC_IVAR_$_PDFBaseLayer._layerType
_OBJC_IVAR_$_PDFBaseLayer._repaintCount
_OBJC_IVAR_$_PDFBorderPrivateVars.dashCount
_OBJC_IVAR_$_PDFBorderPrivateVars.dashPattern
_OBJC_IVAR_$_PDFBorderPrivateVars.hCornerRadius
_OBJC_IVAR_$_PDFBorderPrivateVars.lineWidth
_OBJC_IVAR_$_PDFBorderPrivateVars.style
_OBJC_IVAR_$_PDFBorderPrivateVars.vCornerRadius
_OBJC_IVAR_$_PDFCenteringClipView._disableCentering
_OBJC_IVAR_$_PDFCenteringClipView._lookingAt
_OBJC_IVAR_$_PDFCoachMark._coachMarkWindow
_OBJC_IVAR_$_PDFCoachMark._expired
_OBJC_IVAR_$_PDFCoachMark._fadeOutAnimation
_OBJC_IVAR_$_PDFCoachMark._prePulseTransform
_OBJC_IVAR_$_PDFCoachMark._pulseAnimation
_OBJC_IVAR_$_PDFCoachMark._startFadeOutTimer
_OBJC_IVAR_$_PDFCoachMarkController._coachMark
_OBJC_IVAR_$_PDFCoachMarkView._coach
_OBJC_IVAR_$_PDFCoachMarkView._contentImage
_OBJC_IVAR_$_PDFCoachMarkView._imageOffset
_OBJC_IVAR_$_PDFDestinationPrivateVars.bottom
_OBJC_IVAR_$_PDFDestinationPrivateVars.document
_OBJC_IVAR_$_PDFDestinationPrivateVars.left
_OBJC_IVAR_$_PDFDestinationPrivateVars.page
_OBJC_IVAR_$_PDFDestinationPrivateVars.pageRef
_OBJC_IVAR_$_PDFDestinationPrivateVars.right
_OBJC_IVAR_$_PDFDestinationPrivateVars.top
_OBJC_IVAR_$_PDFDestinationPrivateVars.type
_OBJC_IVAR_$_PDFDestinationPrivateVars.zoom
_OBJC_IVAR_$_PDFDisplayView._allowsAntialiasing
_OBJC_IVAR_$_PDFDisplayView._lastRectangleOfInterest
_OBJC_IVAR_$_PDFDisplayView._listModel
_OBJC_IVAR_$_PDFDisplayView._passwordField
_OBJC_IVAR_$_PDFDisplayView._passwordInstruction
_OBJC_IVAR_$_PDFDisplayView._passwordPrompt
_OBJC_IVAR_$_PDFDisplayView._passwordView
_OBJC_IVAR_$_PDFDisplayView._pdfView
_OBJC_IVAR_$_PDFDisplayView._periodicFlushThreadState
_OBJC_IVAR_$_PDFDisplayView._previousPage
_OBJC_IVAR_$_PDFDisplayView._previousScaleFactor
_OBJC_IVAR_$_PDFDisplayView._previousScrollCenter
_OBJC_IVAR_$_PDFDisplayView._readingModel
_OBJC_IVAR_$_PDFDisplayView._scrollingEnabled
_OBJC_IVAR_$_PDFDisplayView._staticTextModel
_OBJC_IVAR_$_PDFDisplayView._tableModel
_OBJC_IVAR_$_PDFDisplayView._topLevelObjects
_OBJC_IVAR_$_PDFDisplayView._wasMaxInterp
_OBJC_IVAR_$_PDFDisplayView._wasMinInterp
_OBJC_IVAR_$_PDFDocumentPrivateVars.attributes
_OBJC_IVAR_$_PDFDocumentPrivateVars.cacheUsingDisplayLists
_OBJC_IVAR_$_PDFDocumentPrivateVars.checkedOutline
_OBJC_IVAR_$_PDFDocumentPrivateVars.dataDetector
_OBJC_IVAR_$_PDFDocumentPrivateVars.dataDetectorQueue
_OBJC_IVAR_$_PDFDocumentPrivateVars.defaultCrop
_OBJC_IVAR_$_PDFDocumentPrivateVars.delegate
_OBJC_IVAR_$_PDFDocumentPrivateVars.documentCatalogMetadata
_OBJC_IVAR_$_PDFDocumentPrivateVars.documentHasText
_OBJC_IVAR_$_PDFDocumentPrivateVars.fileRefsValidatorServiceConnection
_OBJC_IVAR_$_PDFDocumentPrivateVars.findCharIndex
_OBJC_IVAR_$_PDFDocumentPrivateVars.findInstance
_OBJC_IVAR_$_PDFDocumentPrivateVars.findModel
_OBJC_IVAR_$_PDFDocumentPrivateVars.findOptions
_OBJC_IVAR_$_PDFDocumentPrivateVars.findPageIndex
_OBJC_IVAR_$_PDFDocumentPrivateVars.findResults
_OBJC_IVAR_$_PDFDocumentPrivateVars.findString
_OBJC_IVAR_$_PDFDocumentPrivateVars.findStrings
_OBJC_IVAR_$_PDFDocumentPrivateVars.finding
_OBJC_IVAR_$_PDFDocumentPrivateVars.formData
_OBJC_IVAR_$_PDFDocumentPrivateVars.formDataLoaded
_OBJC_IVAR_$_PDFDocumentPrivateVars.lastFindCharIndex
_OBJC_IVAR_$_PDFDocumentPrivateVars.lastFindPageIndex
_OBJC_IVAR_$_PDFDocumentPrivateVars.lastPageIndexRemoved
_OBJC_IVAR_$_PDFDocumentPrivateVars.outline
_OBJC_IVAR_$_PDFDocumentPrivateVars.ownership
_OBJC_IVAR_$_PDFDocumentPrivateVars.pageArray
_OBJC_IVAR_$_PDFDocumentPrivateVars.pageDictionaryMap
_OBJC_IVAR_$_PDFDocumentPrivateVars.pageLayoutThreadQueue
_OBJC_IVAR_$_PDFDocumentPrivateVars.pdfRef
_OBJC_IVAR_$_PDFDocumentPrivateVars.provider
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToClassForAnnotation
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToClassForPage
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToDidBeginDocumentFind
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToDidBeginPageFind
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToDidEndDocumentFind
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToDidEndPageFind
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToDidFindMatch
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToDidMatchString
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToDidUnlock
_OBJC_IVAR_$_PDFDocumentPrivateVars.respondsToPrintJobTitle
_OBJC_IVAR_$_PDFDocumentPrivateVars.sortAnnotations
_OBJC_IVAR_$_PDFDocumentPrivateVars.subrange
_OBJC_IVAR_$_PDFDocumentPrivateVars.unlockedWithPassword
_OBJC_IVAR_$_PDFDocumentPrivateVars.unsupportedElements
_OBJC_IVAR_$_PDFDocumentPrivateVars.url
_OBJC_IVAR_$_PDFDocumentPrivateVars.xmpNameSpace
_OBJC_IVAR_$_PDFDocumentPrivateVars.xmpPrefix
_OBJC_IVAR_$_PDFDocumentPrivateVars.xmpRootPath
_OBJC_IVAR_$_PDFFormFieldPrivateVars.buttonType
_OBJC_IVAR_$_PDFFormFieldPrivateVars.defaultStringValue
_OBJC_IVAR_$_PDFFormFieldPrivateVars.dictionary
_OBJC_IVAR_$_PDFFormFieldPrivateVars.document
_OBJC_IVAR_$_PDFFormFieldPrivateVars.fieldName
_OBJC_IVAR_$_PDFFormFieldPrivateVars.fieldType
_OBJC_IVAR_$_PDFFormFieldPrivateVars.stringValue
_OBJC_IVAR_$_PDFFormFieldPrivateVars.writeDefaultValue
_OBJC_IVAR_$_PDFFormPrivateVars.appearString
_OBJC_IVAR_$_PDFFormPrivateVars.document
_OBJC_IVAR_$_PDFFormPrivateVars.fieldArray
_OBJC_IVAR_$_PDFHUD._animation
_OBJC_IVAR_$_PDFHUD._delegate
_OBJC_IVAR_$_PDFHUD._fadeInTimer
_OBJC_IVAR_$_PDFHUD._fadeState
_OBJC_IVAR_$_PDFHUD._fadeTimer
_OBJC_IVAR_$_PDFHUD._fadeValue
_OBJC_IVAR_$_PDFHUD._hudView
_OBJC_IVAR_$_PDFHUD._hudWindow
_OBJC_IVAR_$_PDFHUD._sidebarOpen
_OBJC_IVAR_$_PDFHUD._trackingArea
_OBJC_IVAR_$_PDFHUD._trackingView
_OBJC_IVAR_$_PDFHUDLayerController._activeControl
_OBJC_IVAR_$_PDFHUDLayerController._controlArray
_OBJC_IVAR_$_PDFHUDLayerController._delegate
_OBJC_IVAR_$_PDFHUDLayerController._downControl
_OBJC_IVAR_$_PDFHUDLayerController._mouseDown
_OBJC_IVAR_$_PDFHUDLayerController._previewLaunchArt
_OBJC_IVAR_$_PDFHUDLayerController._previewLaunchArtActive
_OBJC_IVAR_$_PDFHUDLayerController._previewSavePDFArt
_OBJC_IVAR_$_PDFHUDLayerController._previewSavePDFArtActive
_OBJC_IVAR_$_PDFHUDLayerController._zoomInArt
_OBJC_IVAR_$_PDFHUDLayerController._zoomInArtActive
_OBJC_IVAR_$_PDFHUDLayerController._zoomOutArt
_OBJC_IVAR_$_PDFHUDLayerController._zoomOutArtActive
_OBJC_IVAR_$_PDFHUDView._activeControl
_OBJC_IVAR_$_PDFHUDView._autoSizeArt
_OBJC_IVAR_$_PDFHUDView._autoSizeArtActive
_OBJC_IVAR_$_PDFHUDView._controlArray
_OBJC_IVAR_$_PDFHUDView._displayOneUpArt
_OBJC_IVAR_$_PDFHUDView._displayOneUpArtActive
_OBJC_IVAR_$_PDFHUDView._displayTwoUpArt
_OBJC_IVAR_$_PDFHUDView._displayTwoUpArtActive
_OBJC_IVAR_$_PDFHUDView._downControl
_OBJC_IVAR_$_PDFHUDView._hud
_OBJC_IVAR_$_PDFHUDView._mouseDown
_OBJC_IVAR_$_PDFHUDView._nextPageArt
_OBJC_IVAR_$_PDFHUDView._nextPageArtActive
_OBJC_IVAR_$_PDFHUDView._previewLaunchArt
_OBJC_IVAR_$_PDFHUDView._previewLaunchArtActive
_OBJC_IVAR_$_PDFHUDView._previewSavePDFArt
_OBJC_IVAR_$_PDFHUDView._previewSavePDFArtActive
_OBJC_IVAR_$_PDFHUDView._previousPageArt
_OBJC_IVAR_$_PDFHUDView._previousPageArtActive
_OBJC_IVAR_$_PDFHUDView._sidebarLeftArt
_OBJC_IVAR_$_PDFHUDView._sidebarLeftArtActive
_OBJC_IVAR_$_PDFHUDView._sidebarOpen
_OBJC_IVAR_$_PDFHUDView._sidebarRightArt
_OBJC_IVAR_$_PDFHUDView._sidebarRightArtActive
_OBJC_IVAR_$_PDFHUDView._singlePageMode
_OBJC_IVAR_$_PDFHUDView._zoomInArt
_OBJC_IVAR_$_PDFHUDView._zoomInArtActive
_OBJC_IVAR_$_PDFHUDView._zoomOutArt
_OBJC_IVAR_$_PDFHUDView._zoomOutArtActive
_OBJC_IVAR_$_PDFLayerController._currentAnnotation
_OBJC_IVAR_$_PDFLayerController._currentHighlights
_OBJC_IVAR_$_PDFLayerController._currentPage
_OBJC_IVAR_$_PDFLayerController._currentSearchSelection
_OBJC_IVAR_$_PDFLayerController._currentSearchString
_OBJC_IVAR_$_PDFLayerController._currentSelection
_OBJC_IVAR_$_PDFLayerController._delegate
_OBJC_IVAR_$_PDFLayerController._displayMode
_OBJC_IVAR_$_PDFLayerController._displaysPageBreaks
_OBJC_IVAR_$_PDFLayerController._document
_OBJC_IVAR_$_PDFLayerController._inContinuousAutoscroll
_OBJC_IVAR_$_PDFLayerController._inhibitInertialScroll
_OBJC_IVAR_$_PDFLayerController._lastAutoscrollEvent
_OBJC_IVAR_$_PDFLayerController._lastAutoscrollPoint
_OBJC_IVAR_$_PDFLayerController._layout
_OBJC_IVAR_$_PDFLayerController._mouseTrackingMode
_OBJC_IVAR_$_PDFLayerController._parentLayer
_OBJC_IVAR_$_PDFLayerController._passwordInstruction
_OBJC_IVAR_$_PDFLayerController._passwordPrompt
_OBJC_IVAR_$_PDFLayerController._pdfHUD
_OBJC_IVAR_$_PDFLayerController._pdfHUDEnabled
_OBJC_IVAR_$_PDFLayerController._pdfHUDup
_OBJC_IVAR_$_PDFLayerController._readingModel
_OBJC_IVAR_$_PDFLayerController._scaleFactor
_OBJC_IVAR_$_PDFLayerController._searchMatches
_OBJC_IVAR_$_PDFLayerController._selectionTrackingData
_OBJC_IVAR_$_PDFLayerController._shouldConstrainScrolling
_OBJC_IVAR_$_PDFLayerController._shouldUseBuiltInContextMenuImplementation
_OBJC_IVAR_$_PDFLayerController._shouldUseBuiltInFindImplementation
_OBJC_IVAR_$_PDFLayerController._shouldUseModalAnnotationEditing
_OBJC_IVAR_$_PDFLayerController._tileCache
_OBJC_IVAR_$_PDFMatteView._pdfView
_OBJC_IVAR_$_PDFOutlinePrivateVars.action
_OBJC_IVAR_$_PDFOutlinePrivateVars.children
_OBJC_IVAR_$_PDFOutlinePrivateVars.childrenLoaded
_OBJC_IVAR_$_PDFOutlinePrivateVars.dictionary
_OBJC_IVAR_$_PDFOutlinePrivateVars.document
_OBJC_IVAR_$_PDFOutlinePrivateVars.open
_OBJC_IVAR_$_PDFOutlinePrivateVars.parent
_OBJC_IVAR_$_PDFOutlinePrivateVars.srcDictionary
_OBJC_IVAR_$_PDFOutlinePrivateVars.title
_OBJC_IVAR_$_PDFOutputLink._bounds
_OBJC_IVAR_$_PDFOutputLink._name
_OBJC_IVAR_$_PDFOutputLink._page
_OBJC_IVAR_$_PDFOutputLink._point
_OBJC_IVAR_$_PDFOutputLink._source
_OBJC_IVAR_$_PDFPagePrivateVars.annotations
_OBJC_IVAR_$_PDFPagePrivateVars.artBox
_OBJC_IVAR_$_PDFPagePrivateVars.attributedString
_OBJC_IVAR_$_PDFPagePrivateVars.bleedBox
_OBJC_IVAR_$_PDFPagePrivateVars.cropBox
_OBJC_IVAR_$_PDFPagePrivateVars.displayList
_OBJC_IVAR_$_PDFPagePrivateVars.displaysAnnotations
_OBJC_IVAR_$_PDFPagePrivateVars.displaysMarkups
_OBJC_IVAR_$_PDFPagePrivateVars.documentRef
_OBJC_IVAR_$_PDFPagePrivateVars.drawsPopups
_OBJC_IVAR_$_PDFPagePrivateVars.enqueuedForDataDetection
_OBJC_IVAR_$_PDFPagePrivateVars.enqueuedForLayout
_OBJC_IVAR_$_PDFPagePrivateVars.image
_OBJC_IVAR_$_PDFPagePrivateVars.label
_OBJC_IVAR_$_PDFPagePrivateVars.layout
_OBJC_IVAR_$_PDFPagePrivateVars.layoutThread
_OBJC_IVAR_$_PDFPagePrivateVars.layoutThreadCondition
_OBJC_IVAR_$_PDFPagePrivateVars.layoutThreadMutex
_OBJC_IVAR_$_PDFPagePrivateVars.lock_accessAnnotations
_OBJC_IVAR_$_PDFPagePrivateVars.lock_accessLayout
_OBJC_IVAR_$_PDFPagePrivateVars.lock_dataEnqueuedForDataDetection
_OBJC_IVAR_$_PDFPagePrivateVars.lock_getAnnotations
_OBJC_IVAR_$_PDFPagePrivateVars.lock_text
_OBJC_IVAR_$_PDFPagePrivateVars.mediaBox
_OBJC_IVAR_$_PDFPagePrivateVars.numChars
_OBJC_IVAR_$_PDFPagePrivateVars.pageLayoutIsSlow
_OBJC_IVAR_$_PDFPagePrivateVars.pageRef
_OBJC_IVAR_$_PDFPagePrivateVars.pdfDoc
_OBJC_IVAR_$_PDFPagePrivateVars.ranDataDetectors
_OBJC_IVAR_$_PDFPagePrivateVars.renderCachingThreshold
_OBJC_IVAR_$_PDFPagePrivateVars.renderTime
_OBJC_IVAR_$_PDFPagePrivateVars.rotation
_OBJC_IVAR_$_PDFPagePrivateVars.scannedAnnotations
_OBJC_IVAR_$_PDFPagePrivateVars.text
_OBJC_IVAR_$_PDFPagePrivateVars.textCharsLoaded
_OBJC_IVAR_$_PDFPagePrivateVars.threadFetchingLayout
_OBJC_IVAR_$_PDFPagePrivateVars.trimBox
_OBJC_IVAR_$_PDFPagePrivateVars.unsupportedElements
_OBJC_IVAR_$_PDFPagePrivateVars.view
_OBJC_IVAR_$_PDFPageRange._page
_OBJC_IVAR_$_PDFPageRange._range
_OBJC_IVAR_$_PDFPageTransition._completionContext
_OBJC_IVAR_$_PDFPageTransition._completionSelector
_OBJC_IVAR_$_PDFPageTransition._completionTarget
_OBJC_IVAR_$_PDFPageTransition._fromHOffset
_OBJC_IVAR_$_PDFPageTransition._fromPage
_OBJC_IVAR_$_PDFPageTransition._fromPageBounds
_OBJC_IVAR_$_PDFPageTransition._offset
_OBJC_IVAR_$_PDFPageTransition._overLayer
_OBJC_IVAR_$_PDFPageTransition._overlayWindow
_OBJC_IVAR_$_PDFPageTransition._pdfView
_OBJC_IVAR_$_PDFPageTransition._scale
_OBJC_IVAR_$_PDFPageTransition._swipeDistance
_OBJC_IVAR_$_PDFPageTransition._toHOffset
_OBJC_IVAR_$_PDFPageTransition._toPage
_OBJC_IVAR_$_PDFPageTransition._toPageBounds
_OBJC_IVAR_$_PDFPageTransition._type
_OBJC_IVAR_$_PDFPopupLayoutInfo.bounds
_OBJC_IVAR_$_PDFPopupLayoutInfo.parentBounds
_OBJC_IVAR_$_PDFPopupLayoutInfo.popupView
_OBJC_IVAR_$_PDFPopupManager._pdfView
_OBJC_IVAR_$_PDFPopupManager._popupViews
_OBJC_IVAR_$_PDFPopupView._annotation
_OBJC_IVAR_$_PDFPopupView._delegate
_OBJC_IVAR_$_PDFPopupView._editing
_OBJC_IVAR_$_PDFPopupView._tooltipTag
_OBJC_IVAR_$_PDFPopupView._trackingArea
_OBJC_IVAR_$_PDFPreviewView._hud
_OBJC_IVAR_$_PDFPreviewView._pdfView
_OBJC_IVAR_$_PDFPreviewView._topLevelObjects
_OBJC_IVAR_$_PDFPrintView._autoRotate
_OBJC_IVAR_$_PDFPrintView._document
_OBJC_IVAR_$_PDFPrintView._pageIndex
_OBJC_IVAR_$_PDFPrintView._printJobTitle
_OBJC_IVAR_$_PDFPrintView._rotateRight
_OBJC_IVAR_$_PDFPrintView._scaleMode
_OBJC_IVAR_$_PDFScrollView._pdfView
_OBJC_IVAR_$_PDFSelectionPrivateVars.activeColor
_OBJC_IVAR_$_PDFSelectionPrivateVars.cgSelections
_OBJC_IVAR_$_PDFSelectionPrivateVars.forceBreaks
_OBJC_IVAR_$_PDFSelectionPrivateVars.inactiveColor
_OBJC_IVAR_$_PDFSelectionPrivateVars.pageRanges
_OBJC_IVAR_$_PDFSelectionPrivateVars.pages
_OBJC_IVAR_$_PDFSelectionPrivateVars.pdfDoc
_OBJC_IVAR_$_PDFSelectionTrackingData.annotation
_OBJC_IVAR_$_PDFSelectionTrackingData.extendingSelection
_OBJC_IVAR_$_PDFSelectionTrackingData.highlighted
_OBJC_IVAR_$_PDFSelectionTrackingData.marquee
_OBJC_IVAR_$_PDFSelectionTrackingData.selectionMode
_OBJC_IVAR_$_PDFSelectionTrackingData.startPage
_OBJC_IVAR_$_PDFSelectionTrackingData.startPoint
_OBJC_IVAR_$_PDFThumbnail._dirty
_OBJC_IVAR_$_PDFThumbnail._dirtyLock
_OBJC_IVAR_$_PDFThumbnail._image
_OBJC_IVAR_$_PDFThumbnail._priority
_OBJC_IVAR_$_PDFThumbnail._rendering
_OBJC_IVAR_$_PDFThumbnail._renderingLock
_OBJC_IVAR_$_PDFThumbnailDisplayView._parent
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.active
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.allowsDragging
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.backgroundColor
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.bezeled
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.defaultImage
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.delegate
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.draggedPageIndex
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.draggingToSelf
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.ignoreLayoutNotification
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.insertionRect
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.labelFont
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.lastSelectedIndex
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.maxColumns
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.multipleSelection
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.numColumns
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.numRows
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.numVisibleRows
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.pdfView
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.scrollView
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.selectedPageSet
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.selectedPages
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.shadowThickness
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.thumbView
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.thumbnailCount
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.thumbnailQueue
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.thumbnailSize
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.thumbnails
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.topPriority
_OBJC_IVAR_$_PDFThumbnailViewPrivateVars.wasSelectedIndex
_OBJC_IVAR_$_PDFTileCache._backgroundLayer
_OBJC_IVAR_$_PDFTileCache._coachMarkLayer
_OBJC_IVAR_$_PDFTileCache._coachMarkRectInLayoutSpace
_OBJC_IVAR_$_PDFTileCache._containingLayer
_OBJC_IVAR_$_PDFTileCache._delegate
_OBJC_IVAR_$_PDFTileCache._deviceScaleFactor
_OBJC_IVAR_$_PDFTileCache._document
_OBJC_IVAR_$_PDFTileCache._fluidZoomScaleFactor
_OBJC_IVAR_$_PDFTileCache._hudLayer
_OBJC_IVAR_$_PDFTileCache._passwordLayer
_OBJC_IVAR_$_PDFTileCache._scaleFactor
_OBJC_IVAR_$_PDFTileCache._scrollLayer
_OBJC_IVAR_$_PDFTileCache._scrollOffset
_OBJC_IVAR_$_PDFTileCache._shadowMask
_OBJC_IVAR_$_PDFTileCache._tileCoverageRect
_OBJC_IVAR_$_PDFTileCache._tiles
_OBJC_IVAR_$_PDFTileCache._tr
_OBJC_IVAR_$_PDFTileCache._visibleRect
_OBJC_IVAR_$_PDFTileCache._wantsFindOverlay
_OBJC_IVAR_$_PDFTileCache._zoomTimer
_OBJC_IVAR_$_PDFTileIndex._x
_OBJC_IVAR_$_PDFTileIndex._y
_OBJC_IVAR_$_PDFTileLayer._findOverlayLayer
_OBJC_IVAR_$_PDFTileLayer._gridX
_OBJC_IVAR_$_PDFTileLayer._gridY
_OBJC_IVAR_$_PDFTileLayer._rendering
_OBJC_IVAR_$_PDFTileLayer._selectionLayer
_OBJC_IVAR_$_PDFTileLayer._wantsFindOverlayLayer
_OBJC_IVAR_$_PDFTileRenderer._bitmapCache
_OBJC_IVAR_$_PDFTileRenderer._bitmapCacheLock
_OBJC_IVAR_$_PDFTileRenderer._colorSpace
_OBJC_IVAR_$_PDFTileRenderer._completedOperation
_OBJC_IVAR_$_PDFTileRenderer._completionBlock
_OBJC_IVAR_$_PDFTileRenderer._currentOperation
_OBJC_IVAR_$_PDFTileRenderer._delegate
_OBJC_IVAR_$_PDFTileRenderer._document
_OBJC_IVAR_$_PDFTileRenderer._layout
_OBJC_IVAR_$_PDFTileRenderer._operations
_OBJC_IVAR_$_PDFTileRenderer._renderQueue
_OBJC_IVAR_$_PDFTileRenderer._startRenderTime
_OBJC_IVAR_$_PDFTileRenderer._stopRenderTime
_OBJC_IVAR_$_PDFTileRenderer._tileSize
_OBJC_IVAR_$_PDFTileRenderingOperation._clipRect
_OBJC_IVAR_$_PDFTileRenderingOperation._contentSize
_OBJC_IVAR_$_PDFTileRenderingOperation._contentsScale
_OBJC_IVAR_$_PDFTileRenderingOperation._delegate
_OBJC_IVAR_$_PDFTileRenderingOperation._imageRef
_OBJC_IVAR_$_PDFTileRenderingOperation._layer
_OBJC_IVAR_$_PDFTileRenderingOperation._layout
_OBJC_IVAR_$_PDFTileRenderingOperation._renderer
_OBJC_IVAR_$_PDFTileRenderingOperation._scrollOffset
_OBJC_IVAR_$_PDFTileRenderingOperation._shadowMask
_OBJC_IVAR_$_PDFTileRenderingOperation._size
_OBJC_IVAR_$_PDFViewControllerPrivateVars.activeAnnotation
_OBJC_IVAR_$_PDFViewControllerPrivateVars.addedView
_OBJC_IVAR_$_PDFViewControllerPrivateVars.control
_OBJC_IVAR_$_PDFViewControllerPrivateVars.controlAnnotation
_OBJC_IVAR_$_PDFViewControllerPrivateVars.document
_OBJC_IVAR_$_PDFViewControllerPrivateVars.ignoreSelectionChange
_OBJC_IVAR_$_PDFViewControllerPrivateVars.pdfView
_OBJC_IVAR_$_PDFViewControllerPrivateVars.viewMarquee
_OBJC_IVAR_$_PDFViewControllerPrivateVars.wasTextWidgetValue
_OBJC_IVAR_$_PDFViewLayout._delegate
_OBJC_IVAR_$_PDFViewLayout._document
_OBJC_IVAR_$_PDFViewLayout._pageCount
_OBJC_IVAR_$_PDFViewLayout._pageSubrange
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsDisableInterpageSpacing
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsDisplayAsBook
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsDisplayBox
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsDisplayMode
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsDisplayRTL
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsDisplaySoloPagesCentered
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsFlipped
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsMargins
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.delegateKnowsScaleFactor
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.lock_layoutBounds
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.pageLayoutBounds
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.singlePageContinuousSize
_OBJC_IVAR_$_PDFViewLayoutPrivateVars.twoUpContinousSize
_OBJC_IVAR_$_PDFViewPrivateVars.activePopupAnnotation
_OBJC_IVAR_$_PDFViewPrivateVars.addedTooltips
_OBJC_IVAR_$_PDFViewPrivateVars.allowsDragging
_OBJC_IVAR_$_PDFViewPrivateVars.animateFlag
_OBJC_IVAR_$_PDFViewPrivateVars.animatingAttribute
_OBJC_IVAR_$_PDFViewPrivateVars.animationRect
_OBJC_IVAR_$_PDFViewPrivateVars.annotationOver
_OBJC_IVAR_$_PDFViewPrivateVars.antiAliasing
_OBJC_IVAR_$_PDFViewPrivateVars.autoScale
_OBJC_IVAR_$_PDFViewPrivateVars.bezeled
_OBJC_IVAR_$_PDFViewPrivateVars.cachingThreshold
_OBJC_IVAR_$_PDFViewPrivateVars.centerPage
_OBJC_IVAR_$_PDFViewPrivateVars.coachMarkController
_OBJC_IVAR_$_PDFViewPrivateVars.controller
_OBJC_IVAR_$_PDFViewPrivateVars.currentImage
_OBJC_IVAR_$_PDFViewPrivateVars.currentPageIndex
_OBJC_IVAR_$_PDFViewPrivateVars.currentSelection
_OBJC_IVAR_$_PDFViewPrivateVars.cursorOnMouseEntered
_OBJC_IVAR_$_PDFViewPrivateVars.defaultGutterWidth
_OBJC_IVAR_$_PDFViewPrivateVars.delegate
_OBJC_IVAR_$_PDFViewPrivateVars.delegateOrdersPageDrawing
_OBJC_IVAR_$_PDFViewPrivateVars.delegateWillScale
_OBJC_IVAR_$_PDFViewPrivateVars.destinationHistory
_OBJC_IVAR_$_PDFViewPrivateVars.disableInterPageSpacing
_OBJC_IVAR_$_PDFViewPrivateVars.displayBox
_OBJC_IVAR_$_PDFViewPrivateVars.displayMode
_OBJC_IVAR_$_PDFViewPrivateVars.displaysAsBook
_OBJC_IVAR_$_PDFViewPrivateVars.displaysMarkups
_OBJC_IVAR_$_PDFViewPrivateVars.displaysPageBreaks
_OBJC_IVAR_$_PDFViewPrivateVars.displaysSoloPagesCentered
_OBJC_IVAR_$_PDFViewPrivateVars.doRunDataDetectors
_OBJC_IVAR_$_PDFViewPrivateVars.drawPageContent
_OBJC_IVAR_$_PDFViewPrivateVars.finalScaleFactor
_OBJC_IVAR_$_PDFViewPrivateVars.finalScrollCenter
_OBJC_IVAR_$_PDFViewPrivateVars.firstVisiblePage
_OBJC_IVAR_$_PDFViewPrivateVars.flushInterval
_OBJC_IVAR_$_PDFViewPrivateVars.fromPage
_OBJC_IVAR_$_PDFViewPrivateVars.greekingThreshold
_OBJC_IVAR_$_PDFViewPrivateVars.gutterColor
_OBJC_IVAR_$_PDFViewPrivateVars.gutterOnRight
_OBJC_IVAR_$_PDFViewPrivateVars.gutterWide
_OBJC_IVAR_$_PDFViewPrivateVars.highlights
_OBJC_IVAR_$_PDFViewPrivateVars.historyIndex
_OBJC_IVAR_$_PDFViewPrivateVars.inhibitAutoScroll
_OBJC_IVAR_$_PDFViewPrivateVars.inhibitDrawing
_OBJC_IVAR_$_PDFViewPrivateVars.initialBringUp
_OBJC_IVAR_$_PDFViewPrivateVars.initialScaleFactor
_OBJC_IVAR_$_PDFViewPrivateVars.initialScrollCenter
_OBJC_IVAR_$_PDFViewPrivateVars.inputShadingImage
_OBJC_IVAR_$_PDFViewPrivateVars.interpolation
_OBJC_IVAR_$_PDFViewPrivateVars.lastVisiblePage
_OBJC_IVAR_$_PDFViewPrivateVars.layout
_OBJC_IVAR_$_PDFViewPrivateVars.lineWidthThreshold
_OBJC_IVAR_$_PDFViewPrivateVars.matteColor
_OBJC_IVAR_$_PDFViewPrivateVars.matteColorHasAlpha
_OBJC_IVAR_$_PDFViewPrivateVars.matteView
_OBJC_IVAR_$_PDFViewPrivateVars.maxScaleFactor
_OBJC_IVAR_$_PDFViewPrivateVars.minScaleFactor
_OBJC_IVAR_$_PDFViewPrivateVars.pageAnimation
_OBJC_IVAR_$_PDFViewPrivateVars.pageColor
_OBJC_IVAR_$_PDFViewPrivateVars.pageColorHasAlpha
_OBJC_IVAR_$_PDFViewPrivateVars.pagesView
_OBJC_IVAR_$_PDFViewPrivateVars.passwordViewUp
_OBJC_IVAR_$_PDFViewPrivateVars.pdfDoc
_OBJC_IVAR_$_PDFViewPrivateVars.periodicFlush
_OBJC_IVAR_$_PDFViewPrivateVars.popupManager
_OBJC_IVAR_$_PDFViewPrivateVars.redrawTimer
_OBJC_IVAR_$_PDFViewPrivateVars.redrawTimerLock
_OBJC_IVAR_$_PDFViewPrivateVars.scaleFactorFromArchive
_OBJC_IVAR_$_PDFViewPrivateVars.scaling
_OBJC_IVAR_$_PDFViewPrivateVars.scheduledPageSync
_OBJC_IVAR_$_PDFViewPrivateVars.scrollEntry
_OBJC_IVAR_$_PDFViewPrivateVars.scrollView
_OBJC_IVAR_$_PDFViewPrivateVars.scrollingChangesPages
_OBJC_IVAR_$_PDFViewPrivateVars.shadowMask
_OBJC_IVAR_$_PDFViewPrivateVars.showTooltips
_OBJC_IVAR_$_PDFViewPrivateVars.suspendRendering
_OBJC_IVAR_$_PDFViewPrivateVars.trackingArea
_OBJC_IVAR_$_PDFViewPrivateVars.transition
_OBJC_IVAR_$_PDFViewPrivateVars.transitionFilter
_OBJC_IVAR_$_PDFViewPrivateVars.useLogicalPageLabels
_OBJC_IVAR_$_PDFViewPrivateVars.wasAutoScale
_OBJC_IVAR_$_PDFViewPrivateVars.wasDisplayMode
_OBJC_IVAR_$_PDFViewPrivateVars.wasMatteColor
_OBJC_IVAR_$_PDFViewPrivateVars.windowNotifications
_OBJC_IVAR_$_PDFViewPrivateVars.zoomIncrement
_OBJC_METACLASS_$_PDFAccessibilityListItemModel
_OBJC_METACLASS_$_PDFAccessibilityListModel
_OBJC_METACLASS_$_PDFAccessibilityStaticTextModel
_OBJC_METACLASS_$_PDFAccessibilityTableCellModel
_OBJC_METACLASS_$_PDFAccessibilityTableColumnModel
_OBJC_METACLASS_$_PDFAccessibilityTableModel
_OBJC_METACLASS_$_PDFAccessibilityTableRowModel
_OBJC_METACLASS_$_PDFAccessibleThumbnail
_OBJC_METACLASS_$_PDFAction
_OBJC_METACLASS_$_PDFActionGoTo
_OBJC_METACLASS_$_PDFActionGoToPrivateVars
_OBJC_METACLASS_$_PDFActionNamed
_OBJC_METACLASS_$_PDFActionNamedPrivateVars
_OBJC_METACLASS_$_PDFActionPrivateVars
_OBJC_METACLASS_$_PDFActionRemoteGoTo
_OBJC_METACLASS_$_PDFActionRemoteGoToPrivateVars
_OBJC_METACLASS_$_PDFActionResetForm
_OBJC_METACLASS_$_PDFActionResetFormPrivateVars
_OBJC_METACLASS_$_PDFActionURL
_OBJC_METACLASS_$_PDFActionURLPrivateVars
_OBJC_METACLASS_$_PDFAnnotation
_OBJC_METACLASS_$_PDFAnnotationButtonWidget
_OBJC_METACLASS_$_PDFAnnotationButtonWidgetPrivateVars
_OBJC_METACLASS_$_PDFAnnotationChoiceWidget
_OBJC_METACLASS_$_PDFAnnotationChoiceWidgetPrivateVars
_OBJC_METACLASS_$_PDFAnnotationCircle
_OBJC_METACLASS_$_PDFAnnotationCirclePrivateVars
_OBJC_METACLASS_$_PDFAnnotationFreeText
_OBJC_METACLASS_$_PDFAnnotationFreeTextPrivateVars
_OBJC_METACLASS_$_PDFAnnotationInk
_OBJC_METACLASS_$_PDFAnnotationInkPrivateVars
_OBJC_METACLASS_$_PDFAnnotationLine
_OBJC_METACLASS_$_PDFAnnotationLinePrivateVars
_OBJC_METACLASS_$_PDFAnnotationLink
_OBJC_METACLASS_$_PDFAnnotationLinkPrivateVars
_OBJC_METACLASS_$_PDFAnnotationMarkup
_OBJC_METACLASS_$_PDFAnnotationMarkupPrivateVars
_OBJC_METACLASS_$_PDFAnnotationMovie
_OBJC_METACLASS_$_PDFAnnotationMoviePrivateVars
_OBJC_METACLASS_$_PDFAnnotationPolyline
_OBJC_METACLASS_$_PDFAnnotationPolylinePrivateVars
_OBJC_METACLASS_$_PDFAnnotationPopup
_OBJC_METACLASS_$_PDFAnnotationPopupPrivateVars
_OBJC_METACLASS_$_PDFAnnotationPrivateVars
_OBJC_METACLASS_$_PDFAnnotationSquare
_OBJC_METACLASS_$_PDFAnnotationSquarePrivateVars
_OBJC_METACLASS_$_PDFAnnotationStamp
_OBJC_METACLASS_$_PDFAnnotationStampPrivateVars
_OBJC_METACLASS_$_PDFAnnotationText
_OBJC_METACLASS_$_PDFAnnotationTextPrivateVars
_OBJC_METACLASS_$_PDFAnnotationTextWidget
_OBJC_METACLASS_$_PDFAnnotationTextWidgetPrivateVars
_OBJC_METACLASS_$_PDFAppearanceCharacteristics
_OBJC_METACLASS_$_PDFAppearanceCharacteristicsPrivateVars
_OBJC_METACLASS_$_PDFBaseLayer
_OBJC_METACLASS_$_PDFBorder
_OBJC_METACLASS_$_PDFBorderPrivateVars
_OBJC_METACLASS_$_PDFCenteringClipView
_OBJC_METACLASS_$_PDFCoachMark
_OBJC_METACLASS_$_PDFCoachMarkController
_OBJC_METACLASS_$_PDFCoachMarkView
_OBJC_METACLASS_$_PDFDestination
_OBJC_METACLASS_$_PDFDestinationPrivateVars
_OBJC_METACLASS_$_PDFDisplayView
_OBJC_METACLASS_$_PDFDocument
_OBJC_METACLASS_$_PDFDocumentPrivateVars
_OBJC_METACLASS_$_PDFFadeOutAnimation
_OBJC_METACLASS_$_PDFForm
_OBJC_METACLASS_$_PDFFormField
_OBJC_METACLASS_$_PDFFormFieldPrivateVars
_OBJC_METACLASS_$_PDFFormPrivateVars
_OBJC_METACLASS_$_PDFHUD
_OBJC_METACLASS_$_PDFHUDAnimation
_OBJC_METACLASS_$_PDFHUDLayerController
_OBJC_METACLASS_$_PDFHUDView
_OBJC_METACLASS_$_PDFHUDWindow
_OBJC_METACLASS_$_PDFLayerController
_OBJC_METACLASS_$_PDFMatteView
_OBJC_METACLASS_$_PDFOutline
_OBJC_METACLASS_$_PDFOutlinePrivateVars
_OBJC_METACLASS_$_PDFOutputLink
_OBJC_METACLASS_$_PDFPage
_OBJC_METACLASS_$_PDFPagePrivateVars
_OBJC_METACLASS_$_PDFPageRange
_OBJC_METACLASS_$_PDFPageTransition
_OBJC_METACLASS_$_PDFPopupLayoutInfo
_OBJC_METACLASS_$_PDFPopupManager
_OBJC_METACLASS_$_PDFPopupView
_OBJC_METACLASS_$_PDFPreviewView
_OBJC_METACLASS_$_PDFPrintView
_OBJC_METACLASS_$_PDFPulseAnimation
_OBJC_METACLASS_$_PDFScrollView
_OBJC_METACLASS_$_PDFSelection
_OBJC_METACLASS_$_PDFSelectionPrivateVars
_OBJC_METACLASS_$_PDFSelectionTrackingData
_OBJC_METACLASS_$_PDFThumbnail
_OBJC_METACLASS_$_PDFThumbnailDisplayView
_OBJC_METACLASS_$_PDFThumbnailView
_OBJC_METACLASS_$_PDFThumbnailViewPrivateVars
_OBJC_METACLASS_$_PDFTileCache
_OBJC_METACLASS_$_PDFTileIndex
_OBJC_METACLASS_$_PDFTileLayer
_OBJC_METACLASS_$_PDFTileRenderer
_OBJC_METACLASS_$_PDFTileRenderingOperation
_OBJC_METACLASS_$_PDFTransitionView
_OBJC_METACLASS_$_PDFView
_OBJC_METACLASS_$_PDFViewAnimation
_OBJC_METACLASS_$_PDFViewController
_OBJC_METACLASS_$_PDFViewControllerPrivateVars
_OBJC_METACLASS_$_PDFViewLayout
_OBJC_METACLASS_$_PDFViewLayoutPrivateVars
_OBJC_METACLASS_$_PDFViewPrivateVars
_OBJC_METACLASS_$_PDFViewScrollView
_PDFAdaptContextCTMToFitRectInRect
_PDFBitmapContextLengthWithSize
_PDFContextCreateGrayColorSpace
_PDFContextCreateRGBColorSpace
_PDFContextSetGrayFillColor
_PDFContextSetGrayStrokeColor
_PDFContextSetRGBFillColor
_PDFContextSetRGBStrokeColor
_PDFCreateBitmapContextWithSizeSupportingSubPixelAntialiasing
_PDFCreateImageWithBitmapContext
_PDFCreateImageWithBlock
_PDFCreateImageWithMallocedBitmapContextTransferData
_PDFCreateMallocedBitmapContextWithSize
_PDFCreateMallocedBitmapContextWithSizeSupportingSubPixelAntialiasing
_PDFCreateMallocedGrayscaleContextWithSize
_PDFCreateReservedBitmapContextWithSize
_PDFCreateReservedBitmapContextWithSizeAndBuffer
_PDFCreateVMBitmapContextWithSize
_PDFDocumentAnnotationsChangedNotification
_PDFDocumentAuthorAttribute
_PDFDocumentCreationDateAttribute
_PDFDocumentCreatorAttribute
_PDFDocumentDidBeginFindNotification
_PDFDocumentDidBeginPageFindNotification
_PDFDocumentDidBeginPageWriteNotification
_PDFDocumentDidBeginWriteNotification
_PDFDocumentDidEndFindNotification
_PDFDocumentDidEndPageFindNotification
_PDFDocumentDidEndPageWriteNotification
_PDFDocumentDidEndWriteNotification
_PDFDocumentDidFindMatchNotification
_PDFDocumentDidUnlockNotification
_PDFDocumentKeywordsAttribute
_PDFDocumentModificationDateAttribute
_PDFDocumentProducerAttribute
_PDFDocumentSubjectAttribute
_PDFDocumentTitleAttribute
_PDFDocumentTrappedAttribute
_PDFFormDidChangeValueNotification
_PDFHUDAutoScaleNotification
_PDFHUDAutoSizeControl
_PDFHUDDisplayModeControl
_PDFHUDLaunchPreviewControl
_PDFHUDLaunchPreviewNotification
_PDFHUDNextPageControl
_PDFHUDNextPageNotification
_PDFHUDPreviousPageControl
_PDFHUDPreviousPageNotification
_PDFHUDSavePDFControl
_PDFHUDSeperatorControl
_PDFHUDSidebarCloseNotification
_PDFHUDSidebarControl
_PDFHUDSidebarOpenNotification
_PDFHUDSinglePageNotification
_PDFHUDTwoPageNotification
_PDFHUDZoomInControl
_PDFHUDZoomInNotification
_PDFHUDZoomOutControl
_PDFHUDZoomOutNotification
_PDFKIT_DISABLE_WHIPPET
_PDFKitEdgeInsetsInsetRect
_PDFKitEdgeInsetsOutsetRect
_PDFPrintAutoRotateKey
_PDFPrintRotateRightKey
_PDFPrintScalingModeKey
_PDFThumbnailViewDocumentEditedNotification
_PDFThumbnailViewSelectionChangedNotification
_PDFTileRendererContainerSizeAttributeKey
_PDFTileRendererDrawSizeAttributeKey
_PDFTileRendererFlavorAttributeKey
_PDFTileRendererSynchronousAttributeKey
_PDFViewAnnotationHitNotification
_PDFViewAnnotationWillHitNotification
_PDFViewAnnotationsDidChangeNotification
_PDFViewChangedHistoryNotification
_PDFViewCopyPermissionNotification
_PDFViewDidLayoutDocumentViewNotification
_PDFViewDisplayBoxChangedNotification
_PDFViewDisplayModeChangedNotification
_PDFViewDocumentChangedNotification
_PDFViewGutterChangedWidthNotification
_PDFViewPageChangedNotification
_PDFViewPopupWillCloseNotification
_PDFViewPrintPermissionNotification
_PDFViewScaleChangedNotification
_PDFViewSelectionChangedNotification
_PDFViewUsesPageLabelsChangedNotification
_PDFViewVisiblePagesChangedNotification
_SASLPrep
_USE_PDFKIT_TILERENDERER
__PDFDestroyMallocedBitmapContext
__PDFDestroyReservedBitmapContext
__PDFDestroyVMBitmapContext
_check_mul_size_size
_gShadowCenterLeftData
_gShadowCenterRightData
_gShadowLowerCenterData
_gShadowLowerLeftData
_gShadowLowerRightData
_gShadowUpperLeftData
_gShadowUpperRightData
_g_count
_getFilenameForEncoding
_getFilepathFromObjectDetermineEncoding
_heightForStringDrawing
_kTrackingPeriodicDelay
_kTrackingPeriodicInterval
_pdfShadowMaskLeft
_pdfShadowMaskLowerCenter
_pdfShadowMaskLowerLeft
_pdfShadowMaskLowerRight
_pdfShadowMaskRight
_pdfShadowMaskUpperLeft
_pdfShadowMaskUpperRight
_widthForStringDrawing
_CATransform3DMakeScale
_CFArrayAppendValue
_CFArrayCreate
_CFArrayCreateMutable
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFArrayRemoveValueAtIndex
_CFAttributedStringCreate
_CFAttributedStringCreateMutable
_CFAttributedStringGetAttributes
_CFAttributedStringGetLength
_CFAttributedStringGetString
_CFAttributedStringReplaceString
_CFAttributedStringSetAttribute
_CFBundleCreate
_CFBundleGetFunctionPointerForName
_CFDataCreate
_CFDataCreateMutable
_CFDataGetBytes
_CFDictionaryAddValue
_CFDictionaryCreate
_CFDictionaryCreateCopy
_CFDictionaryCreateMutable
_CFDictionaryGetValue
_CFDictionaryRemoveValue
_CFDictionarySetValue
_CFGetTypeID
_CFMakeCollectable
_CFNullGetTypeID
_CFNumberCreate
_CFPreferencesCopyValue
_CFRelease
_CFRetain
_CFRunLoopGetMain
_CFRunLoopPerformBlock
_CFRunLoopWakeUp
_CFStringAppend
_CFStringCompare
_CFStringCreateMutableCopy
_CFStringCreateWithBytes
_CFStringFindWithOptions
_CFStringGetCString
_CFStringGetCharacterAtIndex
_CFStringGetLength
_CFStringInsert
_CFStringTrimWhitespace
_CFURLCreateWithFileSystemPath
_CGAffineTransformIdentity
_CGAffineTransformInvert
_CGAffineTransformMakeScale
_CGAffineTransformMakeTranslation
_CGAffineTransformScale
_CGAffineTransformTranslate
_CGBitmapContextCreate
_CGBitmapContextCreateImage
_CGBitmapContextGetBitmapInfo
_CGBitmapContextGetBitsPerComponent
_CGBitmapContextGetBitsPerPixel
_CGBitmapContextGetBytesPerRow
_CGBitmapContextGetColorSpace
_CGBitmapContextGetData
_CGBitmapContextGetHeight
_CGBitmapContextGetWidth
_CGBitmapGetAlignedBytesPerRow
_CGColorCreate
_CGColorCreateGenericGray
_CGColorCreateGenericRGB
_CGColorGetComponents
_CGColorGetConstantColor
_CGColorGetNumberOfComponents
_CGColorRelease
_CGColorSpaceCreateDeviceRGB
_CGColorSpaceCreateWithName
_CGColorSpaceGetNumberOfComponents
_CGColorSpaceRelease
_CGContextAddArcToPoint
_CGContextAddCurveToPoint
_CGContextAddEllipseInRect
_CGContextAddLineToPoint
_CGContextAddPath
_CGContextAddRect
_CGContextBeginPath
_CGContextClearRect
_CGContextClip
_CGContextClipToMask
_CGContextClipToRect
_CGContextClosePath
_CGContextConcatCTM
_CGContextConvertRectToDeviceSpace
_CGContextConvertRectToUserSpace
_CGContextDrawDisplayList
_CGContextDrawImage
_CGContextDrawLinearGradient
_CGContextDrawPDFPage
_CGContextDrawPath
_CGContextDrawShading
_CGContextFillEllipseInRect
_CGContextFillPath
_CGContextFillRect
_CGContextGetAllowsAntialiasing
_CGContextGetCTM
_CGContextGetClipBoundingBox
_CGContextGetInterpolationQuality
_CGContextMoveToPoint
_CGContextRelease
_CGContextRestoreGState
_CGContextRotateCTM
_CGContextSaveGState
_CGContextScaleCTM
_CGContextSetAllowsAntialiasing
_CGContextSetAlpha
_CGContextSetBlendMode
_CGContextSetCTM
_CGContextSetCompositeOperation
_CGContextSetFillColor
_CGContextSetFillColorSpace
_CGContextSetFillColorWithColor
_CGContextSetFont
_CGContextSetFontSize
_CGContextSetGrayFillColor
_CGContextSetInterpolationQuality
_CGContextSetLineCap
_CGContextSetLineDash
_CGContextSetLineJoin
_CGContextSetLineWidth
_CGContextSetLineWidthThreshold
_CGContextSetRGBFillColor
_CGContextSetShadow
_CGContextSetShadowWithColor
_CGContextSetStrokeColor
_CGContextSetStrokeColorSpace
_CGContextSetStrokeColorWithColor
_CGContextSetTextGreekingThreshold
_CGContextSetTextMatrix
_CGContextSetTextPosition
_CGContextShowGlyphsAtPoint
_CGContextStrokeEllipseInRect
_CGContextStrokeLineSegments
_CGContextStrokePath
_CGContextStrokeRect
_CGContextTranslateCTM
_CGDataConsumerCreateWithCFData
_CGDataConsumerCreateWithURL
_CGDataConsumerRelease
_CGDataProviderCreateWithCFData
_CGDataProviderCreateWithData
_CGDataProviderCreateWithURL
_CGDataProviderRelease
_CGDataProviderRetain
_CGDisplayListContextCreate
_CGDisplayListCreate
_CGDisplayListCreateWithRect
_CGDisplayListRelease
_CGDisplayListSetBoundingBox
_CGFontCopyPostScriptName
_CGFunctionCreate
_CGFunctionRelease
_CGGradientCreateWithColorComponents
_CGGradientRelease
_CGImageCreate
_CGImageMetadataCopyStringValueWithPath
_CGImageMetadataCreateFromXMPData
_CGImageMetadataCreateMutable
_CGImageMetadataCreateMutableCopy
_CGImageMetadataCreateXMPData
_CGImageMetadataEnumerateTagsUsingBlock
_CGImageMetadataRegisterNamespaceForPrefix
_CGImageMetadataRemoveTagWithPath
_CGImageMetadataSetValueWithPath
_CGImageMetadataTagCopyPrefix
_CGPDFArchiveAddSelection
_CGPDFArchiveCreate
_CGPDFArchiveGetHTML
_CGPDFArchiveGetRTFDData
_CGPDFArchiveGetWebArchiveData
_CGPDFArchiveRelease
_CGPDFArrayGetArray
_CGPDFArrayGetCount
_CGPDFArrayGetDictionary
_CGPDFArrayGetInteger
_CGPDFArrayGetName
_CGPDFArrayGetNull
_CGPDFArrayGetNumber
_CGPDFArrayGetObject
_CGPDFArrayGetString
_CGPDFContextAddAnnotation
_CGPDFContextAddCatalogEntry
_CGPDFContextAddDocumentMetadata
_CGPDFContextBeginPage
_CGPDFContextClose
_CGPDFContextCreate
_CGPDFContextEndPage
_CGPDFDictionaryApplyFunction
_CGPDFDictionaryGetArray
_CGPDFDictionaryGetBoolean
_CGPDFDictionaryGetDictionary
_CGPDFDictionaryGetInteger
_CGPDFDictionaryGetName
_CGPDFDictionaryGetNumber
_CGPDFDictionaryGetObject
_CGPDFDictionaryGetRect
_CGPDFDictionaryGetStream
_CGPDFDictionaryGetString
_CGPDFDocumentAllowsCopying
_CGPDFDocumentAllowsPrinting
_CGPDFDocumentAuthenticateOwnerPassword
_CGPDFDocumentAuthenticateUserPassword
_CGPDFDocumentCreateWithProvider
_CGPDFDocumentGetCatalog
_CGPDFDocumentGetDataProvider
_CGPDFDocumentGetDestination
_CGPDFDocumentGetInfo
_CGPDFDocumentGetNumberOfPages
_CGPDFDocumentGetPage
_CGPDFDocumentGetVersion
_CGPDFDocumentIsEncrypted
_CGPDFDocumentIsUnlocked
_CGPDFDocumentRelease
_CGPDFDocumentRetain
_CGPDFDocumentUnlockWithPassword
_CGPDFDrawingContextCreateWithStream
_CGPDFDrawingContextDraw
_CGPDFDrawingContextRelease
_CGPDFFontCreateWithObject
_CGPDFFontDescriptorGetFlags
_CGPDFFontGetFont
_CGPDFFontGetFontDescriptor
_CGPDFFontRelease
_CGPDFFormCreate
_CGPDFFormGetBBox
_CGPDFFormGetMatrix
_CGPDFFormGetResources
_CGPDFFormGetStream
_CGPDFFormRelease
_CGPDFLayoutCreateString
_CGPDFLayoutCreateStringForRanges
_CGPDFLayoutGetCharacterBounds
_CGPDFLayoutGetCharacterUnicode
_CGPDFLayoutGetRootNode
_CGPDFLayoutRelease
_CGPDFLayoutRetain
_CGPDFNodeGetBounds
_CGPDFNodeGetNodeContainingPoint
_CGPDFNodeGetTextRange
_CGPDFObjectGetType
_CGPDFObjectGetValue
_CGPDFPageCopyPageLabel
_CGPDFPageGetBoxRect
_CGPDFPageGetDictionary
_CGPDFPageGetDocument
_CGPDFPageGetLayout
_CGPDFPageGetPageNumber
_CGPDFPageGetRotationAngle
_CGPDFSelectionAddSelection
_CGPDFSelectionCreateAtPoint
_CGPDFSelectionCreateAttributedString
_CGPDFSelectionCreateBetweenPointsWithOptions
_CGPDFSelectionCreateForRange
_CGPDFSelectionCreateForStringRange
_CGPDFSelectionCreateFromPoint
_CGPDFSelectionCreateFromSelection
_CGPDFSelectionCreateInRect
_CGPDFSelectionCreateSelectionsByLine
_CGPDFSelectionCreateString
_CGPDFSelectionCreateToPoint
_CGPDFSelectionEqualToSelection
_CGPDFSelectionExtendAtEnd
_CGPDFSelectionExtendAtStart
_CGPDFSelectionGetBounds
_CGPDFSelectionGetCGFontAtIndex
_CGPDFSelectionGetClientProperty
_CGPDFSelectionGetContentRect
_CGPDFSelectionGetGlyphAtIndex
_CGPDFSelectionGetLength
_CGPDFSelectionGetNumberOfRectsAndTransforms
_CGPDFSelectionGetNumberOfStringRanges
_CGPDFSelectionGetNumberOfTextRanges
_CGPDFSelectionGetPage
_CGPDFSelectionGetRectAndTransform
_CGPDFSelectionGetStringRange
_CGPDFSelectionGetTextMatrixAtIndex
_CGPDFSelectionGetTextRange
_CGPDFSelectionIsEmpty
_CGPDFSelectionIsOfType
_CGPDFSelectionRelease
_CGPDFSelectionSetClientProperty
_CGPDFSelectionSubtractSelection
_CGPDFStreamCopyData
_CGPDFStringCopyDate
_CGPDFStringCopyTextString
_CGPDFStringGetBytePtr
_CGPDFStringGetLength
_CGPDFStringRelease
_CGPDFStringRetain
_CGPathAddCurveToPoint
_CGPathAddLineToPoint
_CGPathAddRect
_CGPathAddRoundedRect
_CGPathCloseSubpath
_CGPathCreateMutable
_CGPathMoveToPoint
_CGPathRelease
_CGPathRetain
_CGPointZero
_CGRectApplyAffineTransform
_CGRectContainsPoint
_CGRectEqualToRect
_CGRectGetHeight
_CGRectGetMaxX
_CGRectGetMaxY
_CGRectGetMidX
_CGRectGetMidY
_CGRectGetMinX
_CGRectGetMinY
_CGRectGetWidth
_CGRectInset
_CGRectIntegral
_CGRectIntersectsRect
_CGRectIsEmpty
_CGRectIsNull
_CGRectNull
_CGRectOffset
_CGRectStandardize
_CGRectUnion
_CGSFlushWindowContentRegion
_CGSGetWindowTransform
_CGSMainConnectionID
_CGSNewRegionWithRect
_CGSReleaseRegion
_CGSSetWindowTransform
_CGShadingCreateAxial
_CGShadingRelease
_CTFontCreateWithName
_CTFontDescriptorCreateMatchingFontDescriptorsWithOptions
_CTFontDescriptorCreateWithNameAndSize
_CTFrameDraw
_CTFramesetterCreateFrame
_CTFramesetterCreateWithAttributedString
_CTLineDraw
_CTLineGetTypographicBounds
_CTTypesetterCreateLine
_CTTypesetterCreateWithAttributedString
_CTTypesetterSuggestLineBreak
_DDResultCopyExtractedURL
_DDResultGetRange
_DDScannerCancelScanning
_DDScannerCopyResultsCheckOverlap
_DDScannerCreateWithType
_DDScannerReset
_DDScannerScanString
_LSCopyDefaultApplicationURLForContentType
_NSAccessibilityActionDescription
_NSAccessibilityBoundsForRangeParameterizedAttribute
_NSAccessibilityCellRole
_NSAccessibilityChildrenAttribute
_NSAccessibilityColumnCountAttribute
_NSAccessibilityColumnIndexRangeAttribute
_NSAccessibilityColumnRole
_NSAccessibilityColumnsAttribute
_NSAccessibilityDescriptionAttribute
_NSAccessibilityEnabledAttribute
_NSAccessibilityFocusedAttribute
_NSAccessibilityFocusedUIElementAttribute
_NSAccessibilityGroupRole
_NSAccessibilityHeaderAttribute
_NSAccessibilityHelpAttribute
_NSAccessibilityHorizontalOrientationValue
_NSAccessibilityImageRole
_NSAccessibilityLineForIndexParameterizedAttribute
_NSAccessibilityLinkRole
_NSAccessibilityListRole
_NSAccessibilityNumberOfCharactersAttribute
_NSAccessibilityOrderedByRowAttribute
_NSAccessibilityOrientationAttribute
_NSAccessibilityParentAttribute
_NSAccessibilityPickAction
_NSAccessibilityPositionAttribute
_NSAccessibilityPostNotification
_NSAccessibilityPressAction
_NSAccessibilityRangeForLineParameterizedAttribute
_NSAccessibilityRoleAttribute
_NSAccessibilityRoleDescription
_NSAccessibilityRoleDescriptionAttribute
_NSAccessibilityRoleDescriptionForUIElement
_NSAccessibilityRowCountAttribute
_NSAccessibilityRowIndexRangeAttribute
_NSAccessibilityRowRole
_NSAccessibilityRowsAttribute
_NSAccessibilitySelectedChildrenAttribute
_NSAccessibilitySelectedTextAttribute
_NSAccessibilitySelectedTextChangedNotification
_NSAccessibilitySelectedTextRangeAttribute
_NSAccessibilitySharedCharacterRangeAttribute
_NSAccessibilitySharedTextUIElementsAttribute
_NSAccessibilitySizeAttribute
_NSAccessibilityStaticTextRole
_NSAccessibilityStringForRangeParameterizedAttribute
_NSAccessibilitySubroleAttribute
_NSAccessibilityTableRole
_NSAccessibilityTitleAttribute
_NSAccessibilityTopLevelUIElementAttribute
_NSAccessibilityUnignoredAncestor
_NSAccessibilityUnignoredChildren
_NSAccessibilityValueAttribute
_NSAccessibilityValueChangedNotification
_NSAccessibilityValueDescriptionAttribute
_NSAccessibilityVerticalOrientationValue
_NSAccessibilityVisibleCharacterRangeAttribute
_NSAccessibilityVisibleChildrenAttribute
_NSAccessibilityVisibleColumnsAttribute
_NSAccessibilityVisibleRowsAttribute
_NSAccessibilityWindowAttribute
_NSAllocateCollectable
_NSAllocateScannedUncollectable
_NSApp
_NSBaselineOffsetAttributeName
_NSBeep
_NSCalibratedRGBColorSpace
_NSCreateMapTable
_NSDefaultRunLoopMode
_NSDefinitionPresentationTypeKey
_NSDefinitionPresentationTypeOverlay
_NSDeviceCMYKColorSpace
_NSDeviceColorSpaceName
_NSDeviceRGBColorSpace
_NSDragPboard
_NSEqualRects
_NSEventTrackingRunLoopMode
_NSFilenamesPboardType
_NSFontAttributeName
_NSForegroundColorAttributeName
_NSFrameRect
_NSFreeMapTable
_NSGenericException
_NSHTMLPboardType
_NSImageNameLockLockedTemplate
_NSInsetRect
_NSIntegralRect
_NSIntersectionRect
_NSIntersectsRect
_NSInvalidArgumentException
_NSInvalidUnarchiveOperationException
_NSIsEmptyRect
_NSKeyValueChangeNewKey
_NSKeyValueChangeOldKey
_NSLog
_NSMapGet
_NSMapInsert
_NSModalPanelRunLoopMode
_NSNonOwnedPointerMapKeyCallBacks
_NSObjectMapValueCallBacks
_NSOffsetRect
_NSPDFPboardType
_NSPasteboardTypeHTML
_NSPasteboardTypeRTFD
_NSPasteboardTypeString
_NSPerformService
_NSPointInRect
_NSPrintScalingFactor
_NSRTFPboardType
_NSRangeException
_NSRectFill
_NSRectFillUsingOperation
_NSRunLoopCommonModes
_NSScrollViewDidEndLiveMagnifyNotification
_NSScrollViewWillStartLiveMagnifyNotification
_NSStringFromRange
_NSStringFromSelector
_NSStringPboardType
_NSTIFFPboardType
_NSTemporaryDirectory
_NSURLFileScheme
_NSUnionRect
_NSViewBoundsDidChangeNotification
_NSViewFrameDidChangeNotification
_NSWindowDidBecomeKeyNotification
_NSWindowDidResignKeyNotification
_NSZeroPoint
_NSZeroRect
_NSZeroSize
_NSZoneFree
_NSZoneReallyFree
_OBJC_CLASS_$_CAAnimationGroup
_OBJC_CLASS_$_CABasicAnimation
_OBJC_CLASS_$_CAKeyframeAnimation
_OBJC_CLASS_$_CALayer
_OBJC_CLASS_$_CAMediaTimingFunction
_OBJC_CLASS_$_CATransaction
_OBJC_CLASS_$_CIColor
_OBJC_CLASS_$_CIFilter
_OBJC_CLASS_$_CIImage
_OBJC_CLASS_$_CIVector
_OBJC_CLASS_$_CPReadingModel
_OBJC_CLASS_$_NSAffineTransform
_OBJC_CLASS_$_NSAlert
_OBJC_CLASS_$_NSAnimation
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAttributedString
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBezierPath
_OBJC_CLASS_$_NSBitmapImageRep
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSClipView
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSColorSpace
_OBJC_CLASS_$_NSCursor
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSEvent
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSFont
_OBJC_CLASS_$_NSGradient
_OBJC_CLASS_$_NSGraphicsContext
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSIndexSet
_OBJC_CLASS_$_NSInvocationOperation
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLayoutConstraint
_OBJC_CLASS_$_NSLayoutManager
_OBJC_CLASS_$_NSLock
_OBJC_CLASS_$_NSMenu
_OBJC_CLASS_$_NSMenuItem
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableAttributedString
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableIndexSet
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNib
_OBJC_CLASS_$_NSNotification
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNotificationQueue
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperation
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSPasteboard
_OBJC_CLASS_$_NSPrintInfo
_OBJC_CLASS_$_NSPrintOperation
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSScreen
_OBJC_CLASS_$_NSScrollView
_OBJC_CLASS_$_NSScroller
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSShadow
_OBJC_CLASS_$_NSSortDescriptor
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSTableColumn
_OBJC_CLASS_$_NSTableView
_OBJC_CLASS_$_NSTextContainer
_OBJC_CLASS_$_NSTextField
_OBJC_CLASS_$_NSTextStorage
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTimer
_OBJC_CLASS_$_NSTrackingArea
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSUserDefaults
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSView
_OBJC_CLASS_$_NSWindow
_OBJC_CLASS_$_NSWorkspace
_OBJC_EHTYPE_$_NSException
_OBJC_IVAR_$_NSClipView._docView
_OBJC_METACLASS_$_CALayer
_OBJC_METACLASS_$_NSAnimation
_OBJC_METACLASS_$_NSClipView
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSOperation
_OBJC_METACLASS_$_NSScrollView
_OBJC_METACLASS_$_NSView
_OBJC_METACLASS_$_NSWindow
_OSSpinLockLock
_OSSpinLockUnlock
__Block_object_assign
__Block_object_dispose
__CFExecutableLinkedOnOrAfter
__CFWebServicesCopyProviderInfo
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSPrintProtected
__Unwind_Resume
___CFConstantStringClassReference
___bzero
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__objc_empty_cache
__xpc_error_key_description
__xpc_runtime_is_app_sandboxed
__xpc_type_array
__xpc_type_error
__xpc_type_string
_calloc
_ceil
_close
_dispatch_async
_dispatch_get_global_queue
_floor
_free
_kCAFillModeForwards
_kCAMediaTimingFunctionEaseInEaseOut
_kCAMediaTimingFunctionEaseOut
_kCFAllocatorDefault
_kCFBooleanTrue
_kCFNull
_kCFPreferencesCurrentHost
_kCFPreferencesCurrentUser
_kCFRunLoopCommonModes
_kCFTypeArrayCallBacks
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCFWebServicesProviderDefaultDisplayNameKey
_kCFWebServicesTypeWebSearch
_kCGColorBlack
_kCGColorClear
_kCGColorSpaceGenericGray
_kCGColorSpaceGenericRGB
_kCGColorSpaceSRGB
_kCGColorWhite
_kCGPDFContextArtBox
_kCGPDFContextAuthor
_kCGPDFContextBleedBox
_kCGPDFContextCreator
_kCGPDFContextCropBox
_kCGPDFContextKeywords
_kCGPDFContextMediaBox
_kCGPDFContextSubject
_kCGPDFContextTitle
_kCGPDFContextTrimBox
_kCGPDFTextStyleBaseLineOffset
_kCGPDFTextStyleFillColor
_kCGPDFTextStyleFillColorSpace
_kCGPDFTextStyleFont
_kCGPDFTextStyleFontSize
_kCTFontAttributeName
_kCTForegroundColorAttributeName
_kUTTypePDF
_mach_absolute_time
_mach_task_self_
_mach_timebase_info
_malloc
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_begin_catch
_objc_copyStruct
_objc_end_catch
_objc_enumerationMutation
_objc_getAssociatedObject
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSend_stret
_objc_setAssociatedObject
_objc_setProperty
_objc_sync_enter
_objc_sync_exit
_open
_pow
_pthread_cond_init
_pthread_cond_signal
_pthread_cond_timedwait
_pthread_getschedparam
_pthread_mutex_init
_pthread_self
_pthread_setcancelstate
_pthread_setcanceltype
_pthread_setschedparam
_puts
_round
_roundf
_sandbox_consume_fs_extension
_stat$INODE64
_strcmp
_sysctlbyname
_syslog
_time
_vm_allocate
_vm_deallocate
_xpc_array_apply
_xpc_connection_cancel
_xpc_connection_create
_xpc_connection_get_context
_xpc_connection_resume
_xpc_connection_send_message_with_reply_sync
_xpc_connection_set_context
_xpc_connection_set_event_handler
_xpc_connection_set_finalizer_f
_xpc_copy_description
_xpc_dictionary_create
_xpc_dictionary_get_string
_xpc_dictionary_get_value
_xpc_dictionary_set_fd
_xpc_dictionary_set_string
_xpc_dictionary_set_uint64
_xpc_get_type
_xpc_release
_xpc_string_get_string_ptr
dyld_stub_binder
