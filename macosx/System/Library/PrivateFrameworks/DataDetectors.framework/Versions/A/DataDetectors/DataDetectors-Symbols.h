-[DDDetectorManager2 init]
-[DDDetectorManager2 initWithThreadManager:]
-[DDDetectorManager2 readDefaults:]
_copyPreferenceWithKey
__DDGetBoolPreference
-[DDThreadManager init]
-[DDThreadManager initWithScanner:]
-[DDPatternCompiler initAndCompile:]
-[DDDetectorManager2 setDelegate:]
-[DDPatternCompiler createScanner:]
-[DDThreadManager compilationFinished:]
-[DDThreadManager _setScanner:]
-[DDDetectorManager2 detectControllerContent:context:]
-[DDScanRequest initWithIdentifier:]
-[DDScanRequest initWithIdentifier:context:]
-[DDScanRequest setIdentifier:]
-[DDScanRequest setContext:]
-[DDThreadManager queueTextToScanInController:identifier:delegate:retryCount:]
-[DDHTMLMessageScanningOperation initWithDocument:threadManager:]
+[WKDOMTextIterator(DDExtensions) dd_iteratorForDocument:]
-[WKDOMTextIterator(DDExtensions) dd_newQueryStopRange:]
-[DDOperation initWithQuery:threadManager:]
-[DDOperation setScanQuery:]
-[DDOperation setScannedTextID:]
-[DDOperation setViewOrController:]
-[DDOperation setDelegate:]
-[DDOperation setFailuresCount:]
-[DDDetectorManager2 controllerWithIdentifierDidAppear:]
-[DDHighlightRequest setWebViewIdentifier:]
-[DDHighlightRequest setWebViewDisplayed:]
-[DDHTMLMessageScanningOperation main]
-[DDOperation scan]
-[DDThreadManager scanner]
-[DDOperation setResults:]
-[DDOperation _scanDone]
-[DDOperation delegate]
-[DDDetectorManager2 scanCompleted:]
-[DDOperation scannedTextID]
-[DDOperation viewOrController]
-[WKWebProcessPlugInBrowserContextController(DDExtensions) dd_highlightsObjectsForEmbeddedURLs]
-[DDScanRequest context]
-[DDOperation scanQuery]
-[DDOperation results]
-[WKDOMTextIterator(DDExtensions) dd_collectDDRangesForQuery:forResults:]
+[DDRange2 rangeWithDOMRange:]
-[DDRange2 initWithDOMRange:]
-[DDRange2 node]
___36-[DDDetectorManager2 scanCompleted:]_block_invoke
-[WKDOMNode(DDExtensions) dd_searchForLinkEndNode:]
-[DDRange2 startOffset]
+[DDActionsManager sharedManager]
-[DDActionsManager init]
-[DDActionsManager actionsForType:]
-[DDActionsManager _load]
-[DDActionsManager _listActionsInPlugin:]
+[DDAction actionForDictionary:inBundle:]
-[DDMiscAction initWithDict:bundle:]
-[DDAction initWithDict:bundle:]
-[DDSeparatorAction init]
-[DDBubbleAction initWithDict:bundle:]
-[DDURLAction initWithDict:bundle:]
-[DDScanRequest setResults:]
-[DDHighlightRequest webView]
-[DDHighlightRequest setWebView:]
-[DDOperation postOperationCleanUp]
-[DDOperation dealloc]
-[DDRange2 dealloc]
-[DDHighlightObject setTargetURL:]
-[DDHighlightObject setRange2:]
-[DDAction type]
-[DDMiscAction controllerClass]
-[DDMiscAction _loadActionIfNeeded]
-[DDHighlightObject setResult:fromQuery:]
-[DDHighlightObject setResult:]
-[DDHighlightObject range2]
-[DDHighlightObject result]
-[DDHighlightObject dealloc]
-[DDHighlightObject setWebViewIdentifier:]
-[DDHighlightRequest setHighlightObjects:]
-[DDHighlightRequest webViewDisplayed]
-[DDDetectorManager2 _highligtsOverlayForController:highlightRequest:]
-[DDHighlightRequest webViewIdentifier]
-[DDDetectorManager2 _highlightsOverlayForIdentifier:]
-[DDWK2Overlay init]
-[DDWK2Overlay installInPage:]
_willMoveToPage
-[DDWK2Overlay willMoveToPage:]
_didMoveToPage
-[DDWK2Overlay didMoveToPage:]
-[DDWK2Overlay setDataSource:]
-[DDWK2Overlay setDelegate:]
-[DDWK2Overlay reloadHighlights]
-[DDDetectorManager2 highlightsViewHighlightObjects:]
-[DDHighlightRequest highlightObjects]
-[DDWK2Overlay setHighlightedObjects:]
-[DDWK2Overlay recomputeLayout]
-[DDWK2Overlay removeAllTrackingAreas]
-[DDWK2Overlay subviews]
-[DDWK2Overlay setTrackingAreas:]
-[DDWK2Overlay setEnteredTrackingAreas:]
-[DDWK2Overlay setClickedView:]
-[DDWK2Overlay _addMultiViewForObject:withArrow:availableViews:]
-[DDDetectorManager2 highlightsView:framesOfHighlightObject:]
-[DDHighlightObject followedByBlank]
-[DDDetectorManager2 highlightsView:highlightStyleForObject:]
-[DDHighlightObject targetURL]
-[DDDetectorManager2 highlightsView:tooltipForObject:]
-[DDBasicHighlightsView init]
-[DDBasicHighlightsView setGlobalVisibleRect:]
-[DDBasicHighlightsView setHighlightState:disableAnimation:]
-[DDBasicHighlightsView _setOpacity:disableAnimation:]
-[DDBasicHighlightsView layerOnly]
-[DDBasicHighlightsView updateToolTip]
-[DDBasicHighlightsView setLayerOnly:]
-[DDWK2Overlay addSubview:]
-[DDBasicHighlightsView setOverlay:]
-[DDBasicHighlightsView setHighlightObject:]
-[DDBasicHighlightsView setHighlightStyle:]
-[DDBasicHighlightsView setSublayerRects:withArrow:textDirection:endsWithEOL:]
_DDUITypeRegister
_DDUITypeCreateInstance_
__DDHighlightCFInit
_DDHighlightSetBorderPolygon
_DDHighlightGetNumberOfShapes
_DDHighlightSimplifyPolygon
_DDHighlightGetNumberOfBorderPoints
_DDHighlightGetNumberOfShapePoints
_DDHighlightGetShapeWithSmallestEdgeIndex
_DDHighlightGetShapeSmallestEdgeSize
_DDHighlightGetShapeSmallestEdgeIndex
_DDHighlightGetShapePointAtCircularIndex
-[DDBasicHighlightsView wantsRolloverEffect]
-[DDWK2Overlay _setTrackingAreaForBasicHighlight:entering:ignoreCleanup:]
-[DDBasicHighlightsView trackingAreaRects:]
-[DDWK2Overlay addTrackingArea:alreadyInside:]
-[DDWK2Overlay trackingAreas]
-[DDBasicHighlightsView setToolTipString:]
-[DDAction isImmediate]
-[DDMiscAction name]
-[DDAction name]
_rectSort
_DDHighlightRemoveSmallestEdge
-[DDWK2Overlay updateHighlightStatesForMousePosition]
-[DDWK2Overlay setNeedsRelayout]
-[DDDetectorManager2 controllerWithIdentifierWillDisappear:]
-[DDDetectorManager2 _removeReferenceToHLOverlayForIdentifier:]
___63-[DDDetectorManager2 _removeReferenceToHLOverlayForIdentifier:]_block_invoke
-[DDWK2Overlay deactivate]
-[DDWK2Overlay dealloc]
-[DDWK2Overlay setSubviews:]
-[DDDetectorManager2 controllerWithIdentifierWillGoAway:]
-[DDThreadManager cancelOperationForIdentifier:]
-[DDScanRequest dealloc]
-[DDHighlightRequest dealloc]
-[DDBasicHighlightsView dealloc]
__DDHighlightCFFinalize
-[DDDetectorManager2 updateHitTestUserDataForIdentifier:hitTestResult:userData:]
___54-[DDDetectorManager2 _highlightsOverlayForIdentifier:]_block_invoke
-[DDWK2Overlay hitView]
-[DDWK2Overlay enteredTrackingAreas]
-[DDDetectorManager2 actionContextForBasicView:]
-[DDOperation failuresCount]
_DDHighlightShapeVerticallyIntersectsShape
_mouseMoved
-[DDWK2Overlay mouseMovedTo:]
-[DDWK2Overlay mouseEntered:]
-[DDActionsManager hasUIElementInUse]
-[DDWK2Overlay _mouseEnteredBasicHLView:withRelatedObjects:]
-[DDWK2Overlay setState:forHighlightView:disableAnimation:]
-[DDBasicHighlightsView drawsSomething]
+[DDBasicHighlightsView defaultAnimationForKey:]
-[DDBasicHighlightsView overlayAlphaValue]
-[DDWK2Overlay removeTrackingArea:]
-[DDBasicHighlightsView highlightObject]
-[DDHighlightObject webViewIdentifier]
+[DDActionContext contextFromDictionary:]
-[DDActionContext init]
-[DDActionContext setEventTitle:]
-[DDActionContext setReferenceDate:]
-[DDActionContext setAuthorUUID:]
-[DDActionContext setAuthorName:]
-[DDActionContext setAuthorEmailAddress:]
-[DDActionContext setURL:]
-[DDActionContext setMatchedString:]
-[DDActionContext setAllResults:]
-[DDActionContext setSelectionString:]
-[DDScanRequest results]
-[DDActionContext setMainResult:]
-[DDActionContext setHighlightFrame:]
-[DDBasicHighlightsView actionRect]
-[DDActionContext setAimFrame:]
-[DDActionContext encodeWithCoder:]
+[NSDictionary(DDSerializableResult) dd_serializableResultWithResult:]
-[DDActionContext dealloc]
-[DDActionContext initWithCoder:]
-[DDBasicHighlightsView setOverlayAlphaValue:]
-[DDBasicHighlightsView overlay]
_drawRect
-[DDWK2Overlay drawDirtyRect:inContext:]
-[NSDictionary(DDSerializableResult) dd_createResult]
-[DDActionContext augmentContextWithDictionary:]
-[DDActionContext eventTitle]
-[DDActionContext referenceDate]
-[DDActionContext authorUUID]
-[DDActionContext authorName]
-[DDActionContext authorEmailAddress]
-[DDActionContext URL]
-[DDActionContext matchedString]
-[DDActionContext allResults]
-[DDActionContext selectionString]
-[DDBasicHighlightsView drawAtPoint:inContext:]
____DDHighlightDrawInContext_block_invoke_2
__DDHighlightImageNamed
_DDHighlightGetArrowImageForType
-[DDWK2Overlay mouseExited:location:]
-[DDWK2Overlay _mouseExitedBasicHLView:withInfos:]
-[DDActionContext mainResult]
-[DDActionContext copyWithZone:]
-[DDActionContext aimFrame]
-[DDActionContext highlightFrame]
-[DDActionContext setCompletionHandler:]
-[DDActionsManager menuItemsForResult:actionContext:]
-[DDActionsManager menuItemsForActions:result:textCheckingResult:URL:context:]
-[DDAction menuItemForResult:textCheckingResult:URL:uiReady:context:actionTarget:]
-[DDAction displaysUI]
-[DDMiscAction displaysUI]
-[DDBubbleAction displaysUI]
-[DDAction alternate]
-[DDActionContext setTransientObject:]
_mouseDown
-[DDWK2Overlay mouseDownAt:button:]
-[DDBasicHighlightsView pointIsOnHighlight:onTriangle:]
-[DDBasicHighlightsView setButtonPressed:]
_DDHighlightSetButtonPressed
_mouseUp
-[DDWK2Overlay mouseUpAt:button:]
-[DDWK2Overlay clickedView]
-[DDWK2Overlay handleMouseClick:onTriangle:onView:]
-[DDWK2Overlay switchOffHighlights]
-[DDDetectorManager2 highlightsView:actionForEvent:onHighlightObject:proposedAction:]
-[DDDetectorManager2 requestUIForClick:highlightView:immediate:]
-[DDActionContext setImmediate:]
-[DDActionContext setIsRightClick:]
-[DDDetectorManager2 externalUIStarted]
-[DDActionsManager setUIElement:isInUse:]
-[DDDetectorManager2 delegate]
+[NSKeyedArchiver(dd_additions) dd_secureArchivedDataWithRootObject:]
+[DDActionContext supportsSecureCoding]
+[DDDetectorManager2 popupMenuForDDContext:view:completionHandler:]
-[DDActionContext immediate]
-[DDActionContext completionHandler]
-[DDDetectorManager2 externalUIIsOver]
-[DDActionContext isRightClick]
-[DDActionsManager runActionForDictionary:]
-[DDAction actionUTI]
_mt_log_datadetectors_ui_actions
-[DDMiscAction runForResult:context:]
-[DDMiscAction _runForResult:url:textCheckingResult:context:]
-[DDMiscAction controllerClassName]
-[DDActionsManager serviceRequested]
-[DDActionsManager _loadAllPlugins]
-[DDActionsManager _allowedClassNames]
___38-[DDActionsManager _allowedClassNames]_block_invoke
+[NSKeyedUnarchiver(dd_additions) dd_secureUnarchiveObjectWithData:ofClass:]
___DDMapsInitialize_block_invoke
____DDUseRTLLayout_block_invoke
___dd_give_window_rights_to_app_block_invoke
___dd_send_start_action_block_invoke
-[DDActionsManager serviceAnswered]
__dd_clearNeedsDisplayFlagRecursive
__dd_client_remove_child_common
___dd_detach_and_close_bubble_block_invoke
-[DDActionsManager notifyClientActionDidEnd]
-[DDBubbleAction runForResult:context:]
-[DDBubbleAction setDataDetectorsResult:]
-[DDBubbleAction runForURL:context:]
-[DDBubbleController showModalBubbleForURL:textCheckingResult:DDResult:context:parentWindow:]
-[DDBubbleController setTextCheckingResult:]
-[DDBubbleController setDataDetectorsResult:]
-[DDBubbleController configureBubble:]
___93-[DDBubbleController showModalBubbleForURL:textCheckingResult:DDResult:context:parentWindow:]_block_invoke
-[DDBubbleController bubbleDidClose:]
-[DDBubbleController dealloc]
-[DDActionContext transientObject]
-[DDActionsManager serviceStopped]
-[DDAction dealloc]
-[DDAction canCloseUI]
-[DDAction closeUI]
-[DDAction tryCloseUI]
-[DDAction runForTopLevelMatch:]
-[DDAction runForResult:context:]
-[DDAction runForTextCheckingResult:context:]
-[DDAction runForURL:context:]
-[DDAction rawMenuItemForContext:]
-[DDURLAction dealloc]
+[DDURLAction urlFromTemplateString:result:replacementForSpaces:]
_replaceSpacesWith
-[DDURLAction runForResult:context:]
-[DDURLAction runForURL:context:]
-[DDBubbleAction dealloc]
-[DDBubbleAction canCloseUI]
-[DDBubbleAction closeUI]
-[DDBubbleAction dataDetectorsResult]
-[DDMiscAction dealloc]
-[DDMiscAction rawMenuItemForContext:]
-[DDMiscAction runForURL:context:]
-[DDMiscAction runForTextCheckingResult:context:]
-[DDMiscAction closeUI]
-[DDActionsManager dealloc]
-[DDActionsManager _someWindowDidClose:]
-[DDActionsManager notifyClientActionWillStart]
-[DDActionsManager menuItemsForResult:context:]
-[DDActionsManager menuItemsForResult:context:screenLocation:]
-[DDActionsManager menuItemsForValue:type:service:context:]
__DDResultCreateWithValueAndType
-[DDActionsManager menuItemsForTargetURL:actionContext:]
-[DDActionsManager actionsForTextCheckingResult:altMode:]
-[DDActionsManager menuItemsForTextCheckingResult:actionContext:]
-[DDActionsManager runActionFromRect:forTextCheckingResult:context:]
___68-[DDActionsManager runActionFromRect:forTextCheckingResult:context:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___68-[DDActionsManager runActionFromRect:forTextCheckingResult:context:]_block_invoke140
___copy_helper_block_143
___destroy_helper_block_144
-[DDActionsManager menuItemsForTextCheckingResult:string:context:screenLocation:]
-[DDActionsManager actionsForResult:]
-[DDActionsManager hasActionsForResult:actionContext:]
-[DDActionsManager defaultActionForType:]
-[DDActionsManager UIElements]
-[DDActionsManager unanchorBubbles]
-[DDActionsManager requestBubbleClosure]
-[DDActionsManager requestBubbleClosureUnanchorOnFailure:]
+[DDActionsManager shouldUseActionsWithContext:]
+[DDActionsManager didUseActions]
+[DDActionsManager actionUIOpenedWithContext:]
+[DDActionsManager actionUIClosed]
___copy_helper_block_345
___destroy_helper_block_346
-[DDActionsManager forceWindowAnimationsFromRight]
-[DDActionsManager setForceWindowAnimationsFromRight:]
-[DDActionsManager delegate]
-[DDActionsManager setDelegate:]
+[DDDetectorManager sharedManager]
-[DDDetectorManager initWithThreadManager:]
-[DDDetectorManager init]
-[DDDetectorManager dealloc]
-[DDDetectorManager setDOMModificationMode:]
-[DDDetectorManager viewWillGoAway:]
-[DDDetectorManager _removeReferenceToHLViewForIdentifier:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___59-[DDDetectorManager _removeReferenceToHLViewForIdentifier:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[DDDetectorManager webViewWithIdentifierWillGoAway:]
-[DDDetectorManager cancelDetectionForIdentifier:]
-[DDDetectorManager webViewWithIdentifierDidAppear:]
-[DDDetectorManager webViewWithIdentifierWillDisappear:]
-[DDDetectorManager clearResultsForView:]
-[DDDetectorManager setDelegate:]
-[DDDetectorManager delegate]
-[DDDetectorManager detectWebViewContent:context:]
-[DDDetectorManager highlightsViewHighlightObjects:]
-[DDDetectorManager highlightsView:framesOfHighlightObject:]
-[DDDetectorManager highlightsView:highlightStyleForObject:]
-[DDDetectorManager highlightsView:menuForEvent:onHighlightObject:]
-[DDDetectorManager highlightsView:actionForEvent:onHighlightObject:proposedAction:]
-[DDDetectorManager highlightsView:tooltipForObject:]
-[DDDetectorManager highlightsView:blankAfterObject:]
-[DDDetectorManager layoutChangedForView:]
-[DDDetectorManager scanCompleted:]
___35-[DDDetectorManager scanCompleted:]_block_invoke
-[DDDetectorManager setHighlightsEverything:]
-[DDDetectorManager setOnlyURLify:]
-[DDDetectorManager readDefaults:]
-[DDDetectorManager setPasteboardString:]
-[DDDetectorManager _highlightsViewForIdentifier:]
___50-[DDDetectorManager _highlightsViewForIdentifier:]_block_invoke
___copy_helper_block_326
___destroy_helper_block_327
-[DDDetectorManager _highligtsViewForWebView:highlightRequest:]
-[WebView(DDExtensions) dd_highlightsObjectsForEmbeddedURLs]
-[DDHighlightObject description]
-[DDHighlightObject localizedTypeForAccessibility]
-[DDHighlightObject range]
-[DDHighlightObject setRange:]
-[DDHighlightObject setFollowedByBlank:]
+[DDHighlightsView initialize]
-[DDHighlightsView initOnView:usingScrollView:]
-[DDHighlightsView dealloc]
-[DDHighlightsView deactivate]
-[DDHighlightsView documentView]
-[DDHighlightsView setDataSource:]
-[DDHighlightsView setDelegate:]
-[DDHighlightsView setAlwaysShowHighlights:]
-[DDHighlightsView hideHighlights]
-[DDHighlightsView removeAllTrackingAreas]
-[DDHighlightsView _setTrackingAreaForBasicHighlight:entering:]
-[DDHighlightsView _addMultiViewForObject:withArrow:availableViews:]
-[DDHighlightsView recomputeLayout]
-[DDHighlightsView reloadHighlights]
-[DDHighlightsView enqueuePerformLayout]
-[DDHighlightsView removeHighlights]
-[DDHighlightsView scrollViewDidScroll]
-[DDHighlightsView windowDidResignKey:]
-[DDHighlightsView windowDidBecomeMain:]
-[DDHighlightsView viewWillMoveToWindow:]
-[DDHighlightsView viewDidMoveToWindow]
-[DDHighlightsView updateToolTips]
-[DDHighlightsView eventIsOnHighlight:onTriangle:]
-[DDHighlightsView menuForEvent:]
-[DDHighlightsView forwardEvent:nextEvent:]
-[DDHighlightsView handleEvent:nextEvent:]
-[DDHighlightsView hitTest:]
-[DDHighlightsView _mouseEnteredBasicHLView:withRelatedObjects:]
-[DDHighlightsView _mouseExitedBasicHLView:withInfos:]
-[DDHighlightsView mouseEntered:]
-[DDHighlightsView mouseExited:]
-[DDHighlightsView mouseDown:]
-[DDHighlightsView setAllState:disableAnimations:]
-[DDHighlightsView setHighlightedObjects:]
-[DDHighlightsView(PrivateExtensions) viewForObject:]
-[DDHighlightsView(PrivateExtensions) accessibilityShowMenuForPoint:]
-[DDHighlightsView(PrivateExtensions) updateHighlightStatesForMousePosition]
-[NSScrollView(DDHighlightsExtension) dd_addHighlightsView:]
-[NSScrollView(DDHighlightsExtension) dd_highlightsViews]
-[NSScrollView(DDHighlightsExtension) ax_dd_highlightViews]
-[NSScrollView(DDHighlightsExtension) accessibilityParameterizedAttributeNames]
-[NSScrollView(DDHighlightsExtension) accessibilityAttributeValue:forParameter:]
_DDScrollviewSwizzleImplementations
_newTile
_newReflectScrolledClipView
_newAccessoryViewMightInterfereWithOverlayScrollers
_getScrollViewForHighlights
-[DDScanRequest identifier]
-[DDOperation init]
-[DDOperation initWithStringToScan:threadManager:]
-[DDOperation cancel]
-[DDOperation tag]
-[DDOperation setTag:]
-[DDHTMLMessageScanningOperation initWithWebView:threadManager:]
-[DDThreadManager deactivate]
___29-[DDThreadManager deactivate]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[DDThreadManager dealloc]
-[DDThreadManager queueTextToScanInWebView:identifier:delegate:retryCount:]
+[NSImage(CGImageLoading) _pathOfImageWithName:inBundle:]
+[NSImage(CGImageLoading) dd_imageNamed:inBundle:]
-[NSString(dd_additions) dd_hasDiacriticPrefix:]
-[NSString(dd_additions) dd_stringByCleaningWhitespace]
-[DDPhoneOrMailURI initWithString:]
-[DDPhoneOrMailURI dealloc]
+[DDPhoneOrMailURI URIWithString:]
-[DDPhoneOrMailURI isMail]
-[DDPhoneOrMailURI isPhone]
-[DDPhoneOrMailURI isHttp]
-[DDPhoneOrMailURI value]
-[DDTransitionBubble initWithSize:preferedEdge:]
-[DDTransitionBubble _beginPredeepAnimationAgainstPoint:inView:]
-[DDTransitionBubble _doPredeepAnimationWithProgress:]
-[DDTransitionBubble _cancelPredeepAnimation]
-[DDTransitionBubble _completeDeepAnimation]
-[DDTransitionBubble dd_discardBubble]
-[DDBasicHighlightsView currentState]
-[DDBasicHighlightsView _finishSetup]
-[DDBasicHighlightsView pointIsOnButton:]
-[DDBasicHighlightsView drawRect:]
-[DDBasicHighlightsView highlight:]
-[DDBasicHighlightsView highlightStyle]
-[DDBasicHighlightsView toolTipString]
-[DDBasicHighlightsView mouseDown]
-[DDBasicHighlightsView setMouseDown:]
-[DDPatternCompiler compilationFinished:]
_DDHighlightHasActionRect
_DDHighlightSetDrawButtonContent
__DDHighlightFindDistantEdges
____DDHighlightDrawInContext_block_invoke
__DDHighlightCFEqual
__DDHighlightCFHash
__DDHighlightCFCopyFormatDescription
__DDHighlightCFCopyDebugDescription
-[DDHighlightRangeUpdater initWithHighlight:]
-[DDHighlightRangeUpdater resetOffsets]
-[DDHighlightRangeUpdater dealloc]
-[WebTextIterator(DDExtensions) dd_newQueryStopRange:]
-[WebTextIterator(DDExtensions) dd_collectDDRangesForQuery:forResults:]
-[WebTextIterator(DDExtensions) dd_doUrlificationForQuery:forResults:referenceDate:document:DOMWasModified:relevantResults:knownHighlights:URLificationBlock:]
__DDRangeUpdatersCreate
+[WebTextIterator(DDExtensions) dd_iteratorForDocument:]
-[WebTextIterator(DDExtensions_Private) dd_checkCurrentRangeAgainstString:]
-[DOMNode(DDExtensions) dd_searchForLinkEndNode:]
__isLinkNode
-[DDRange initWithDOMRange:]
+[DDRange rangeWithDOMRange:]
-[DDRange dealloc]
-[DDRange description]
-[DDRange node]
-[DDRange setNode:]
-[DDRange startOffset]
-[DDRange setStartOffset:]
-[DDRange endOffset]
-[DDRange setEndOffset:]
-[DDHighlightButton initWithFrame:]
-[DDHighlightButton hitTest:]
-[DDHighlightButtonCell accessibilityIsIgnored]
-[DDHighlightButtonCell backgroundColor]
-[DDBubbleController dataDetectorsResult]
-[DDBubbleController showModalBubbleForURL:forFrame:]
___copy_helper_block_
___destroy_helper_block_
-[DDBubbleController bubble:shouldOpenURL:forPreviewItem:]
-[DDBubbleController canCloseBubble]
-[DDBubbleController closeBubble]
-[DDBubbleController textCheckingResult]
___dd_can_connect_to_service_block_invoke
-[DDPopoverWindow _childWindowOrderingPriority]
_dd_windowWillClose
_dd_send_request_bubble_closure
__dd_send_oneway_message
_dd_send_unanchor_bubbles
_dd_remove_anchors_from_process_bubbles
___copy_helper_block_
___destroy_helper_block_
___dd_send_start_action_block_invoke92
___copy_helper_block_95
___destroy_helper_block_96
___dd_send_start_action_block_invoke100
_dd_request_bubble_closure
_dd_receive_uiless_answer
___copy_helper_block_199
___destroy_helper_block_200
___dd_detach_and_close_bubble_block_invoke207
____dd_send_oneway_message_block_invoke
-[DDActionContext description]
-[DDActionContext contextForView:altMode:interactionStartedHandler:interactionChangedHandler:interactionStoppedHandler:]
-[DDActionContext setPeerConnection:]
-[DDActionContext peerConnection]
-[DDActionContext interactionStartedHandler]
-[DDActionContext setInteractionStartedHandler:]
-[DDActionContext interactionChangedHandler]
-[DDActionContext setInteractionChangedHandler:]
-[DDActionContext interactionStoppedHandler]
-[DDActionContext setInteractionStoppedHandler:]
-[DDActionContext skipAnimation]
-[DDActionContext setSkipAnimation:]
-[DDActionContext allowedActionUTIs]
-[DDActionContext setAllowedActionUTIs:]
-[DDActionContext disallowedActionUTIs]
-[DDActionContext setDisallowedActionUTIs:]
-[DDActionContext altMode]
-[DDActionContext setAltMode:]
-[DDNameView setDataSource:]
-[DDNameView reloadData]
-[DDNameView commitEditing]
-[DDNameView dealloc]
-[DDNameView styleProvider]
-[DDNameView setStyleProvider:]
+[DDDetectorManager2 sharedManager]
-[DDDetectorManager2 dealloc]
-[DDDetectorManager2 setDOMModificationMode:]
-[DDDetectorManager2 controllerWillGoAway:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___copy_helper_block_
___destroy_helper_block_
-[DDDetectorManager2 cancelDetectionForIdentifier:]
-[DDDetectorManager2 clearResultsForController:]
+[DDDetectorManager2 displayUIForContext:additionalMenuItems:]
-[DDDetectorManager2 highlightsView:blankAfterObject:]
-[DDDetectorManager2 layoutChangedForOverlay:]
-[DDDetectorManager2 setHighlightsEverything:]
-[DDDetectorManager2 setOnlyURLify:]
+[DDDetectorManager2 setPasteboardString:]
+[DDDetectorManager2 setPasteboardUrl:]
+[DDDetectorManager2 runService:]
___copy_helper_block_406
___destroy_helper_block_407
-[DDHighlightRangeUpdater2 initWithHighlight:]
-[DDHighlightRangeUpdater2 resetOffsets]
-[DDHighlightRangeUpdater2 dealloc]
-[WKDOMTextIterator(DDExtensions) dd_doUrlificationForQuery:forResults:referenceDate:document:DOMWasModified:relevantResults:knownHighlights:URLificationBlock:]
__DDRangeUpdatersCreate
-[WKDOMTextIterator(DDExtensions_Private) dd_checkCurrentRangeAgainstString:]
__isLinkNode
-[DDRange2 description]
-[DDRange2 setNode:]
-[DDRange2 setStartOffset:]
-[DDRange2 endOffset]
-[DDRange2 setEndOffset:]
_mouseDragged
_actionContextForResultAtPoint
_dataDetectorsDidPresentUI
_dataDetectorsDidChangeUI
_dataDetectorsDidHideUI
_copyAccessibilityAttributeValue
_copyAccessibilityAttributeNames
-[DDWK2Overlay setAllState:disableAnimations:]
-[DDWK2Overlay setAlwaysShowHighlights:]
-[DDWK2Overlay removeHighlights]
-[DDWK2Overlay hideHighlights]
-[DDWK2Overlay actionContextForResultAtPoint:rangeHandle:]
-[DDWK2Overlay mouseDraggedTo:button:]
-[DDWK2Overlay accessibilityDataDetectorExistsAtPoint:]
-[DDWK2Overlay accessibilityDataDetectorTypeAtPoint:]
-[DDWK2Overlay accessibilityShowDataDetectorMenuAtPoint:]
-[DDWK2Overlay delegate]
-[DDWK2Overlay dataSource]
_DataDetectorsVersionString
_DataDetectorsVersionNumber
GCC_except_table6
GCC_except_table34
GCC_except_table12
GCC_except_table9
GCC_except_table10
GCC_except_table11
GCC_except_table9
GCC_except_table6
GCC_except_table42
GCC_except_table24
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_descriptor_tmp146
___block_descriptor_tmp349
___block_descriptor_tmp
___block_descriptor_tmp277
___block_literal_global
___block_descriptor_tmp329
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp93
___block_literal_global94
_kDDHighlightContextClass
___block_descriptor_tmp
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp79
___block_descriptor_tmp99
___block_descriptor_tmp102
___block_literal_global103
___block_descriptor_tmp181
___block_literal_global182
___block_descriptor_tmp202
___block_descriptor_tmp209
___block_descriptor_tmp298
___block_descriptor_tmp
___block_descriptor_tmp343
___block_literal_global
___block_descriptor_tmp409
_OBJC_IVAR_$_DDURLAction._replacementForSpaces
_OBJC_IVAR_$_DDURLAction._url
_OBJC_IVAR_$_DDBubbleAction._dataDetectorsResult
_OBJC_IVAR_$_DDBubbleAction._bubbleController
_OBJC_IVAR_$_DDMiscAction._controllerClassName
_OBJC_IVAR_$_DDMiscAction._bundle
_OBJC_IVAR_$_DDMiscAction._actionLoadedSuccessfully
_OBJC_IVAR_$_DDActionsManager._uiElementsInUse
_OBJC_IVAR_$_DDActionsManager._forceWindowAnimationsFromRight
_OBJC_IVAR_$_DDActionsManager._actionsDictionary
_OBJC_IVAR_$_DDActionsManager._delegate
_OBJC_IVAR_$_DDActionsManager._containsAnchoredElement
_OBJC_IVAR_$_DDActionsManager._requestCount
_OBJC_IVAR_$_DDDetectorManager._highlightsIdentifierForView
_OBJC_IVAR_$_DDDetectorManager._identifierForWebView
_OBJC_IVAR_$_DDDetectorManager._highlightsRequestsForIdentifier
_OBJC_IVAR_$_DDDetectorManager._scanRequestsForIdentifier
_OBJC_IVAR_$_DDDetectorManager._highlightEverything
_OBJC_IVAR_$_DDDetectorManager._onlyURLify
_OBJC_IVAR_$_DDDetectorManager._scanOperations
_OBJC_IVAR_$_DDDetectorManager._threadManager
_OBJC_IVAR_$_DDDetectorManager._delegate
_OBJC_IVAR_$_DDHighlightObject._result
_OBJC_IVAR_$_DDHighlightObject._webViewIdentifier
_OBJC_IVAR_$_DDHighlightObject._DOMRange
_OBJC_IVAR_$_DDHighlightObject._targetURL
_OBJC_IVAR_$_DDHighlightObject._followedByBlank
_OBJC_IVAR_$_DDHighlightObject._WKDOMRange
_OBJC_IVAR_$_DDHighlightRequest._webView
_OBJC_IVAR_$_DDHighlightRequest._webViewIdentifier
_OBJC_IVAR_$_DDHighlightRequest._highlightObjects
_OBJC_IVAR_$_DDHighlightRequest._webViewDisplayed
_OBJC_IVAR_$_DDHighlightsView._documentView
_OBJC_IVAR_$_DDHighlightsView._highlightQueue
_OBJC_IVAR_$_DDHighlightsView._alwaysShowHighlights
_OBJC_IVAR_$_DDHighlightsView._objectsToArrowlessViewMapping
_OBJC_IVAR_$_DDHighlightsView._relayoutInProgress
_OBJC_IVAR_$_DDHighlightsView._highlightedObjects
_OBJC_IVAR_$_DDHighlightsView._delegate
_OBJC_IVAR_$_DDHighlightsView._dataSource
_OBJC_IVAR_$_DDHighlightsView._numberOfTrackingAreasCreated
_OBJC_IVAR_$_DDHighlightsView._numberOfItemRectsAsked
_OBJC_IVAR_$_DDScanRequest._identifier
_OBJC_IVAR_$_DDScanRequest._context
_OBJC_IVAR_$_DDScanRequest._results
_OBJC_IVAR_$_DDOperation._failuresCount
_OBJC_IVAR_$_DDOperation._threadManager
_OBJC_IVAR_$_DDOperation._query
_OBJC_IVAR_$_DDOperation._viewOrController
_OBJC_IVAR_$_DDOperation._scannedTextID
_OBJC_IVAR_$_DDOperation._results
_OBJC_IVAR_$_DDOperation._delegate
_OBJC_IVAR_$_DDOperation._tag
_OBJC_IVAR_$_DDThreadManager._queue
_OBJC_IVAR_$_DDThreadManager._scanner
_OBJC_IVAR_$_DDTransitionBubble._targetSize
_OBJC_IVAR_$_DDBasicHighlightsView._layerOnly
_OBJC_IVAR_$_DDBasicHighlightsView._mouseDown
_OBJC_IVAR_$_DDBasicHighlightsView._highlightObject
_OBJC_IVAR_$_DDBasicHighlightsView._highlight
_OBJC_IVAR_$_DDBasicHighlightsView._button
_OBJC_IVAR_$_DDBasicHighlightsView._toolTipString
_OBJC_IVAR_$_DDBasicHighlightsView._highlightStyle
_OBJC_IVAR_$_DDBasicHighlightsView._state
_OBJC_IVAR_$_DDBasicHighlightsView._globalVisibleRect
_OBJC_IVAR_$_DDBasicHighlightsView._overlay
_OBJC_IVAR_$_DDHighlightRangeUpdater.highlight
_OBJC_IVAR_$_DDHighlightRangeUpdater.startOffset
_OBJC_IVAR_$_DDHighlightRangeUpdater.endOffset
_OBJC_IVAR_$_DDRange._node
_OBJC_IVAR_$_DDRange._startOffset
_OBJC_IVAR_$_DDRange._endOffset
_OBJC_IVAR_$_DDActionContext._highlightFrame
_OBJC_IVAR_$_DDActionContext._aimFrame
_OBJC_IVAR_$_DDActionContext._eventTitle
_OBJC_IVAR_$_DDActionContext._referenceDate
_OBJC_IVAR_$_DDActionContext._authorABUUID
_OBJC_IVAR_$_DDActionContext._authorEmailAddress
_OBJC_IVAR_$_DDActionContext._authorName
_OBJC_IVAR_$_DDActionContext._url
_OBJC_IVAR_$_DDActionContext._matchedString
_OBJC_IVAR_$_DDActionContext._allResults
_OBJC_IVAR_$_DDActionContext._selectionString
_OBJC_IVAR_$_DDActionContext._mainResult
_OBJC_IVAR_$_DDActionContext._immediate
_OBJC_IVAR_$_DDActionContext._isRightClick
_OBJC_IVAR_$_DDActionContext._skipAnimation
_OBJC_IVAR_$_DDActionContext._transientObject
_OBJC_IVAR_$_DDActionContext._interactionStartedHandler
_OBJC_IVAR_$_DDActionContext._interactionChangedHandler
_OBJC_IVAR_$_DDActionContext._interactionStoppedHandler
_OBJC_IVAR_$_DDActionContext._allowedActionUTIs
_OBJC_IVAR_$_DDActionContext._disallowedActionUTIs
_OBJC_IVAR_$_DDActionContext._altMenuMode
_OBJC_IVAR_$_DDActionContext._peerConnection
_OBJC_IVAR_$_DDActionContext._altMode
_OBJC_IVAR_$_DDNameView._styleProvider
_OBJC_IVAR_$_DDDetectorManager2._highlightsIdentifierForOverlay
_OBJC_IVAR_$_DDDetectorManager2._identifierForController
_OBJC_IVAR_$_DDDetectorManager2._highlightsRequestsForIdentifier
_OBJC_IVAR_$_DDDetectorManager2._scanRequestsForIdentifier
_OBJC_IVAR_$_DDDetectorManager2._highlightEverything
_OBJC_IVAR_$_DDDetectorManager2._onlyURLify
_OBJC_IVAR_$_DDDetectorManager2._scanOperations
_OBJC_IVAR_$_DDDetectorManager2._threadManager
_OBJC_IVAR_$_DDDetectorManager2._delegate
_OBJC_IVAR_$_DDHighlightRangeUpdater2.highlight
_OBJC_IVAR_$_DDHighlightRangeUpdater2.startOffset
_OBJC_IVAR_$_DDHighlightRangeUpdater2.endOffset
_OBJC_IVAR_$_DDRange2._node
_OBJC_IVAR_$_DDRange2._startOffset
_OBJC_IVAR_$_DDRange2._endOffset
_OBJC_IVAR_$_DDWK2Overlay._clientPage
_OBJC_IVAR_$_DDWK2Overlay._alwaysShowHighlights
_OBJC_IVAR_$_DDWK2Overlay._relayoutInProgress
_OBJC_IVAR_$_DDWK2Overlay._overlay
_OBJC_IVAR_$_DDWK2Overlay._objectsToArrowlessViewMapping
_OBJC_IVAR_$_DDWK2Overlay._highlightQueue
_OBJC_IVAR_$_DDWK2Overlay._transform
_OBJC_IVAR_$_DDWK2Overlay._subviews
_OBJC_IVAR_$_DDWK2Overlay._trackingAreas
_OBJC_IVAR_$_DDWK2Overlay._enteredTrackingAreas
_OBJC_IVAR_$_DDWK2Overlay._visibleRect
_OBJC_IVAR_$_DDWK2Overlay._highlightedObjects
_OBJC_IVAR_$_DDWK2Overlay._needsLayout
_OBJC_IVAR_$_DDWK2Overlay._dataSource
_OBJC_IVAR_$_DDWK2Overlay._delegate
_OBJC_IVAR_$_DDWK2Overlay._clickedView
_OBJC_CLASS_$_DDURLAction
_OBJC_CLASS_$_DDBubbleAction
_OBJC_CLASS_$_DDMiscAction
_OBJC_CLASS_$_DDSeparatorAction
_OBJC_METACLASS_$_DDURLAction
_OBJC_METACLASS_$_DDBubbleAction
_OBJC_METACLASS_$_DDMiscAction
_OBJC_METACLASS_$_DDSeparatorAction
_OBJC_CLASS_$_DDHighlightObject
_OBJC_METACLASS_$_DDHighlightObject
_OBJC_CLASS_$_DDHighlightRequest
_OBJC_METACLASS_$_DDHighlightRequest
_OBJC_CLASS_$_DDScanRequest
_OBJC_METACLASS_$_DDScanRequest
_OBJC_CLASS_$_DDOperation
_OBJC_METACLASS_$_DDOperation
_OBJC_CLASS_$_DDHTMLMessageScanningOperation
_OBJC_METACLASS_$_DDHTMLMessageScanningOperation
_OBJC_CLASS_$_DDTransitionBubble
_OBJC_METACLASS_$_DDTransitionBubble
_OBJC_CLASS_$_DDBasicHighlightsView
_OBJC_METACLASS_$_DDBasicHighlightsView
_OBJC_CLASS_$_DDHighlightRangeUpdater
_OBJC_METACLASS_$_DDHighlightRangeUpdater
_OBJC_CLASS_$_DDRange
_OBJC_METACLASS_$_DDRange
_OBJC_CLASS_$_DDHighlightButton
_OBJC_CLASS_$_DDHighlightButtonCell
_OBJC_METACLASS_$_DDHighlightButton
_OBJC_METACLASS_$_DDHighlightButtonCell
_OBJC_METACLASS_$_DDPopoverWindow
_OBJC_CLASS_$_DDPopoverWindow
_OBJC_CLASS_$_DDNameView
_OBJC_METACLASS_$_DDNameView
_OBJC_CLASS_$_DDHighlightRangeUpdater2
_OBJC_METACLASS_$_DDHighlightRangeUpdater2
_OBJC_CLASS_$_DDRange2
_OBJC_METACLASS_$_DDRange2
_OBJC_CLASS_$_DDWK2Overlay
_OBJC_METACLASS_$_DDWK2Overlay
_NSAccessibilityDataDetectorExistsAtPoint
_NSAccessibilityDidShowDataDetectorMenuAtPoint
_NSAccessibilityDataDetectorTypeAtPoint
__DDDefaultsShowArrows
__DDDefaultsLeftClickPopsUpMenu
__DDDefaultsInset
__DDDefaultsExtensionForArrow
_DDUITypeRegister.lock
_kDDXPCServiceName
_kDDXPCMessageNameRequestBubbleClosure
_kDDXPCMessageNameRemoveBubbleAnchors
_kDDXPCMessageNameRequestBubbleClosureWithUnanchorFallback
_sCodeToTemplate
_DDMapsInitialize.once
+[DDActionsManager sharedManager]._sharedActionsManager
__sCurrentMenuContext
__sCurrentBubbleContext
+[DDDetectorManager sharedManager]._sharedManager
-[NSScrollView(DDHighlightsExtension) accessibilityParameterizedAttributeNames].names
_superTile
_superReflectScrolledClipView
_superAccessoryViewMightInterfereWithOverlayScrollers
__DDUseRTLLayout.sUseRTLLayout
__DDUseRTLLayout.sOnceToken
_DDHighlightGetArrowImageForType.siChatButton
_DDHighlightGetArrowImageForType.sStandardButton
__DDHighlightImageNamed.sBundle
__DDHighlightDrawInContext.iChatOnce
_siChatCornerImages
_siChatVerticalDot
_siChatVerticalSpace
_siChatHorizontalDot
_siChatHorizontalSpace
_siChatButtonImage
__DDHighlightDrawInContext.standardImagesOnce
_sStandardCornerImages
_sStandardButtonImage
_DDHighlightGetTypeID.typeID
-[WebTextIterator(DDExtensions) dd_doUrlificationForQuery:forResults:referenceDate:document:DOMWasModified:relevantResults:knownHighlights:URLificationBlock:].didLog
_dd_can_connect_to_service._sCanConnect
_dd_can_connect_to_service.onceToken
__sExternalChildren
__sDDUIControllers
__sExternalChildrenContexts
+[DDDetectorManager2 sharedManager]._sharedManager
-[WKDOMTextIterator(DDExtensions) dd_doUrlificationForQuery:forResults:referenceDate:document:DOMWasModified:relevantResults:knownHighlights:URLificationBlock:].didLog
__DDDefaultsBackgroundColorRef
__DDDefaultsBorderColorRef
__DDDefaultsCornerRadius
__DDDefaultsOpacity
__DDDefaultsClickTriggersDefaultAction
_DDActionsManagerDidRunActionNotification
_DDActionsManagerWillRunActionNotification
_DDHighlightCreateWithRectsInVisibleRect
_DDHighlightCreateWithRectsInVisibleRectWithStyle
_DDHighlightCreateWithRectsInVisibleRectWithStyleAndDirection
_DDHighlightGetActionRect
_DDHighlightGetBoundingRect
_DDHighlightGetLayerWithContext
_DDHighlightGetTrackingRects
_DDHighlightPointIsOnButton
_DDHighlightPointIsOnHighlight
_DDHighlightWantsRollover
_DDHighlightingPrefsSynchronizeWithDefaults
_DDMapsGetBestAddressForResults
_DDMapsGetDictionaryForFullAddress
_DDMapsURLStringForAddressResult
_DDMapsURLStringForString
_DDMenuItemGetActionUTI
_DDPatternCompilationFinishedNotificationName
_DDPatternCompilationScannerUserInfoKey
_OBJC_CLASS_$_DDAction
_OBJC_CLASS_$_DDActionContext
_OBJC_CLASS_$_DDActionsManager
_OBJC_CLASS_$_DDBubbleController
_OBJC_CLASS_$_DDDetectorManager
_OBJC_CLASS_$_DDDetectorManager2
_OBJC_CLASS_$_DDHighlightsView
_OBJC_CLASS_$_DDPatternCompiler
_OBJC_CLASS_$_DDPhoneOrMailURI
_OBJC_CLASS_$_DDThreadManager
_OBJC_IVAR_$_DDAction._actionUTI
_OBJC_IVAR_$_DDAction._actions
_OBJC_IVAR_$_DDAction._alternate
_OBJC_IVAR_$_DDAction._hasDynamicName
_OBJC_IVAR_$_DDAction._isImmediate
_OBJC_IVAR_$_DDAction._name
_OBJC_IVAR_$_DDAction._type
_OBJC_IVAR_$_DDBubbleController._bubble
_OBJC_IVAR_$_DDBubbleController._context
_OBJC_IVAR_$_DDBubbleController._dataDetectorsResult
_OBJC_IVAR_$_DDBubbleController._textCheckingResult
_OBJC_IVAR_$_DDPhoneOrMailURI._isHttpScheme
_OBJC_IVAR_$_DDPhoneOrMailURI._isMailScheme
_OBJC_IVAR_$_DDPhoneOrMailURI._value
_OBJC_METACLASS_$_DDAction
_OBJC_METACLASS_$_DDActionContext
_OBJC_METACLASS_$_DDActionsManager
_OBJC_METACLASS_$_DDBubbleController
_OBJC_METACLASS_$_DDDetectorManager
_OBJC_METACLASS_$_DDDetectorManager2
_OBJC_METACLASS_$_DDHighlightsView
_OBJC_METACLASS_$_DDPatternCompiler
_OBJC_METACLASS_$_DDPhoneOrMailURI
_OBJC_METACLASS_$_DDThreadManager
__DDActionArrowOffsetPreference
__DDAddTimeZoneWithNamePreference
__DDCreateBorderColorPreference
__DDCreateHighlightColorPreference
__DDEventModePreference
__DDFireDefaultActionOnLeftClientPreference
__DDHighlightCornerRadiusPreference
__DDHighlightDefaultOpacityPreference
__DDHighlightInsetPreference
__DDResetPreferences
__DDSetColorPreference
__DDSetPreference
__DDShowAllResultsPreference
__DDShowMenuOnLeftClickPreference
__DDSynchronizePreferences
__DDTimeZoneNamesPreference
__DDUseRTLLayout
_dd_acknowledge_cancel_request
_dd_acknowledge_open_request
_dd_add_action_controller
_dd_can_connect_to_service
_dd_detach_and_close_bubble
_dd_get_aim_frame_from_dictionary
_dd_get_context_dictionary
_dd_get_highlight_frame_from_dictionary
_dd_give_window_rights_to_app
_dd_handle_action_message
_dd_is_running_service_side
_dd_receive_action_controller_message
_dd_receive_handle_special_action
_dd_receive_start_action
_dd_remove_action_controller
_dd_send_simple_action_message
_dd_send_start_action
_dd_send_value_action_message
_dd_store_aim_frame_in_dictionary
_dd_store_highlight_frame_in_dictionary
_dd_store_raw_context_info_in_dictionary
_kDataDetectorsABPersonAuthorKey
_kDataDetectorsAllResultsKey
_kDataDetectorsAuthorAsEmailAddressKey
_kDataDetectorsAuthorAsStringKey
_kDataDetectorsEventTitleKey
_kDataDetectorsMatchedStringKey
_kDataDetectorsReferenceDateKey
_kDataDetectorsSelectionStringKey
_kDataDetectorsSpecialURLKey
_CFArrayAppendValue
_CFArrayCreateMutable
_CFArrayGetCount
_CFArrayGetValueAtIndex
_CFCharacterSetGetPredefined
_CFCharacterSetIsCharacterMember
_CFCopyTypeIDDescription
_CFDictionaryContainsKey
_CFDictionaryCreateMutable
_CFDictionaryCreateMutableCopy
_CFDictionaryGetCount
_CFDictionaryGetTypeID
_CFDictionaryGetValue
_CFDictionaryRemoveValue
_CFDictionarySetValue
_CFGetTypeID
_CFLog
_CFMakeCollectable
_CFNumberGetValue
_CFPreferencesCopyValue
_CFPreferencesSetValue
_CFPreferencesSynchronize
_CFRelease
_CFRetain
_CFRunLoopGetCurrent
_CFRunLoopGetMain
_CFStringCompare
_CFStringCreateWithCharacters
_CFStringTokenizerCopyBestStringLanguage
_CFTimeZoneCopyDefault
_CFUUIDCreate
_CFUUIDCreateString
_CGAffineTransformIdentity
_CGColorCreate
_CGColorCreateGenericGray
_CGColorCreateGenericRGB
_CGColorGetConstantColor
_CGColorRelease
_CGColorSpaceCreateDeviceRGB
_CGColorSpaceRelease
_CGContextAddPath
_CGContextDrawLayerAtPoint
_CGContextFillRect
_CGContextGetCTM
_CGContextSetAlpha
_CGContextSetBlendMode
_CGContextSetCTM
_CGContextSetFillColorWithColor
_CGContextSetLineDash
_CGContextSetLineWidth
_CGContextSetShouldAntialias
_CGContextSetStrokeColorWithColor
_CGContextStrokePath
_CGLayerCreateWithContext
_CGLayerGetContext
_CGLayerRelease
_CGPathAddLineToPoint
_CGPathCreateMutable
_CGPathMoveToPoint
_CGPathRelease
_CGPointZero
_CGRectContainsPoint
_CGRectEqualToRect
_CGRectGetHeight
_CGRectGetMaxX
_CGRectGetMaxY
_CGRectGetMinX
_CGRectGetMinY
_CGRectInset
_CGRectNull
_CGRectStandardize
_CGRectUnion
_CGSBoundingShapeAddRegion
_CGSBoundingShapeCreate
_CGSBoundingShapeGetBounds
_CGSBoundingShapeGetRegion
_CGSBoundingShapeRelease
_CGSCompleteWindowRightsGrant
_CGSGrantWindowRightsReservingWithTimeoutAndToken
_CGSMainConnectionID
_CGSNewRegionWithRectList
_CGSNextPoint
_CGSNextRect
_CGSPointInRegion
_CGSRegionEnumerator
_CGSRegionPathEnumerator
_CGSRegionRelease
_CGSReleaseRegionEnumerator
_CGSUnionRegionWithRect
_CGSWindowRightsSetGrantCompletedBlockForToken
_CGSWindowRightsSetGrantOfferedBlockForToken
_CGWindowLevelForKey
_DDBinderAIMOrEmailKey
_DDBinderApproxTimeKey
_DDBinderBonjourAddressKey
_DDBinderCityKey
_DDBinderCompanyNameKey
_DDBinderContactKey
_DDBinderCountryKey
_DDBinderDateDurationKey
_DDBinderDateKey
_DDBinderDateTimeKey
_DDBinderEmailKey
_DDBinderFileURLKey
_DDBinderFlightNumberKey
_DDBinderFullAddressKey
_DDBinderGenericURLKey
_DDBinderHttpURLKey
_DDBinderIMScreenNameKey
_DDBinderItemNumberKey
_DDBinderJabberOrEmailKey
_DDBinderJobTitleKey
_DDBinderLabelKey
_DDBinderLocationKey
_DDBinderMailURLKey
_DDBinderMapsURLKey
_DDBinderPOBoxKey
_DDBinderPhoneNumberKey
_DDBinderSignatureBlockKey
_DDBinderStateKey
_DDBinderStreetKey
_DDBinderTimeDurationKey
_DDBinderTimeKey
_DDBinderTrackingNumberKey
_DDBinderValueKey
_DDBinderWebURLKey
_DDBinderZipCodeKey
_DDCrash
_DDError
_DDFullLogFunction
_DDLog
_DDLogAssertionFailure
_DDResultAddSubresult
_DDResultCopyExtractedURL
_DDResultCreate
_DDResultCreateEmpty
_DDResultGetContextualData
_DDResultGetMatchedString
_DDResultGetQueryRange
_DDResultGetQueryRangeForURLification
_DDResultGetRange
_DDResultGetRawValue
_DDResultGetSubResults
_DDResultGetSubresultWithType
_DDResultGetType
_DDResultGetValue
_DDResultIsPastDate
_DDResultSetAbsoluteRange
_DDResultSetContextualData
_DDResultSetMatchedString
_DDResultSetSubResults
_DDResultSetType
_DDResultSetValue
_DDScanQueryAddLineBreak
_DDScanQueryAddSeparator
_DDScanQueryAddTextFragment
_DDScanQueryCreate
_DDScanQueryCreateFromString
_DDScanQueryGetFragmentMetaData
_DDScanQueryHasNoLetterBeforeNextLine
_DDScannerCancelScanning
_DDScannerCopyResultsWithOptions
_DDScannerCreate
_DDScannerLoadAddressBookData
_DDScannerReset
_DDScannerScanQuery
_DataDetectorsProximitySort
_NSAccessibilityDescriptionAttribute
_NSApp
_NSCalibratedRGBColorSpace
_NSClassFromString
_NSDefaultRunLoopMode
_NSEqualRects
_NSInsetRect
_NSIntegralRect
_NSInternalInconsistencyException
_NSIntersectionRange
_NSIntersectsRect
_NSIsEmptyRect
_NSKeyedArchiveRootObjectKey
_NSLocaleCountryCode
_NSLocaleLanguageCode
_NSLog
_NSOffsetRect
_NSPerformService
_NSPointInRect
_NSRangeFromString
_NSRectFromString
_NSStringFromClass
_NSStringFromRange
_NSStringFromRect
_NSStringPboardType
_NSUnionRect
_NSWindowDidBecomeKeyNotification
_NSWindowDidResignKeyNotification
_NSWindowWillCloseNotification
_NSZeroPoint
_NSZeroRect
_OBJC_CLASS_$_CABasicAnimation
_OBJC_CLASS_$_CAMediaTimingFunction
_OBJC_CLASS_$_DDRegexpManager
_OBJC_CLASS_$_DDScannerResult
_OBJC_CLASS_$_DOMHTMLAnchorElement
_OBJC_CLASS_$_DOMNode
_OBJC_CLASS_$_DOMText
_OBJC_CLASS_$_NSAddressCheckingResult
_OBJC_CLASS_$_NSAffineTransform
_OBJC_CLASS_$_NSAnimationContext
_OBJC_CLASS_$_NSApplication
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBlockOperation
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSButton
_OBJC_CLASS_$_NSButtonCell
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSColor
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateCheckingResult
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSDistributedNotificationCenter
_OBJC_CLASS_$_NSEvent
_OBJC_CLASS_$_NSException
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSGraphicsContext
_OBJC_CLASS_$_NSImage
_OBJC_CLASS_$_NSIndexPath
_OBJC_CLASS_$_NSKeyedArchiver
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSLinkCheckingResult
_OBJC_CLASS_$_NSLocale
_OBJC_CLASS_$_NSMapTable
_OBJC_CLASS_$_NSMenu
_OBJC_CLASS_$_NSMenuItem
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNotificationCenter
_OBJC_CLASS_$_NSNull
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSOperation
_OBJC_CLASS_$_NSOperationQueue
_OBJC_CLASS_$_NSPasteboard
_OBJC_CLASS_$_NSPhoneNumberCheckingResult
_OBJC_CLASS_$_NSScrollView
_OBJC_CLASS_$_NSScroller
_OBJC_CLASS_$_NSSet
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSTrackingArea
_OBJC_CLASS_$_NSTransitInformationCheckingResult
_OBJC_CLASS_$_NSURL
_OBJC_CLASS_$_NSURLComponents
_OBJC_CLASS_$_NSValue
_OBJC_CLASS_$_NSView
_OBJC_CLASS_$_NSWindow
_OBJC_CLASS_$_NSWorkspace
_OBJC_CLASS_$_QLBubble
_OBJC_CLASS_$_WKDOMElement
_OBJC_CLASS_$_WKDOMNode
_OBJC_CLASS_$_WKDOMRange
_OBJC_CLASS_$_WKDOMText
_OBJC_CLASS_$_WKDOMTextIterator
_OBJC_CLASS_$_WKWebProcessPlugInBrowserContextController
_OBJC_CLASS_$_WebTextIterator
_OBJC_CLASS_$_WebView
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSButton
_OBJC_METACLASS_$_NSButtonCell
_OBJC_METACLASS_$_NSObject
_OBJC_METACLASS_$_NSOperation
_OBJC_METACLASS_$_NSView
_OBJC_METACLASS_$_NSWindow
_OBJC_METACLASS_$_QLBubble
_QLBubbleControlIdentifierKey
_QLBubbleControlLeftAlignedKey
_QLPreviewBubbleControlAddToReadingListIdentifier
_QLPreviewBubbleControlDefaultOpenIdentifier
_WKArrayAppendItem
_WKBooleanCreate
_WKBundleFrameGetVisibleContentBounds
_WKBundlePageGetMainFrame
_WKBundlePageInstallPageOverlay
_WKBundlePageOverlayClear
_WKBundlePageOverlayCreate
_WKBundlePageOverlaySetAccessibilityClient
_WKBundlePageOverlaySetNeedsDisplay
_WKBundlePageUninstallPageOverlay
_WKMutableArrayCreate
_WKPointGetValue
_WKRelease
_WKStringCopyCFString
_WKStringCreateWithCFString
__Block_object_assign
__Block_object_dispose
__Block_release
__CFRuntimeCreateInstance
__CFRuntimeRegisterClass
__CFXPCCreateCFObjectFromXPCObject
__CFXPCCreateXPCObjectFromCFObject
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__NSCopyServiceActions
__Unwind_Resume
___CFConstantStringClassReference
___bzero
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__dispatch_main_q
__objc_empty_cache
__xpc_type_dictionary
__xpc_type_error
_ceil
_class_getClassMethod
_class_getInstanceMethod
_decalogEnable
_dispatch_get_global_queue
_dispatch_once
_floor
_fmax
_fmin
_free
_getaudit_addr
_geteuid
_kABAddressCityKey
_kABAddressCountryKey
_kABAddressStateKey
_kABAddressStreetKey
_kABAddressZIPKey
_kABInstantMessageServiceAIM
_kABInstantMessageServiceFacebook
_kABInstantMessageServiceGaduGadu
_kABInstantMessageServiceGoogleTalk
_kABInstantMessageServiceICQ
_kABInstantMessageServiceJabber
_kABInstantMessageServiceMSN
_kABInstantMessageServiceQQ
_kABInstantMessageServiceSkype
_kABInstantMessageServiceYahoo
_kCAMediaTimingFunctionEaseInEaseOut
_kCFAllocatorDefault
_kCFCopyStringDictionaryKeyCallBacks
_kCFPreferencesAnyApplication
_kCFPreferencesAnyHost
_kCFPreferencesCurrentUser
_kCFRunLoopCommonModes
_kCFTypeArrayCallBacks
_kCFTypeDictionaryKeyCallBacks
_kCFTypeDictionaryValueCallBacks
_kCGColorClear
_kDDInstantMessageServiceAIM
_kDDInstantMessageServiceFacebook
_kDDInstantMessageServiceGaduGadu
_kDDInstantMessageServiceGoogleTalk
_kDDInstantMessageServiceICQ
_kDDInstantMessageServiceJabber
_kDDInstantMessageServiceMSN
_kDDInstantMessageServiceQQ
_kDDInstantMessageServiceSkype
_kDDInstantMessageServiceYahoo
_malloc
_memcpy
_method_setImplementation
_msgtracer_log_with_keys
_objc_assign_global
_objc_assign_ivar
_objc_assign_strongCast
_objc_assign_weak
_objc_autoreleasePoolPop
_objc_autoreleasePoolPush
_objc_begin_catch
_objc_copyStruct
_objc_end_catch
_objc_enumerationMutation
_objc_exception_rethrow
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_msgSend_stret
_objc_read_weak
_objc_setProperty
_objc_sync_enter
_objc_sync_exit
_objc_terminate
_pthread_mutex_lock
_pthread_mutex_unlock
_strcmp
_time
_xpc_connection_cancel
_xpc_connection_create
_xpc_connection_resume
_xpc_connection_send_message
_xpc_connection_set_event_handler
_xpc_connection_set_target_queue
_xpc_dictionary_create
_xpc_dictionary_get_value
_xpc_dictionary_set_string
_xpc_dictionary_set_value
_xpc_get_type
_xpc_release
_xpc_retain
dyld_stub_binder
