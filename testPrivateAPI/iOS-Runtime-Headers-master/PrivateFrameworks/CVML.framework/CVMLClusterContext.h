/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLClusterContext : NSObject {
    NSString * _cacheFolderPath;
    NSString * _clusterMethod;
    <CVMLClustering> * _clustering;
    CVMLSimilarityMatrix * _matrix;
    unsigned int  _maxFaceId;
    NSMutableDictionary * _obsDictById;
    float  _threshold;
    BOOL  _useClusterObservation;
}

@property (readonly) NSString *clusterMethod;
@property (getter=getClusteredFaceIds, readonly) NSSet *clusteredFaceIds;
@property (retain) CVMLSimilarityMatrix *matrix;
@property (readonly) BOOL useClusterObservation;

- (void).cxx_destruct;
- (BOOL)addFaces:(id)arg1 error:(id*)arg2;
- (BOOL)cancelClustering:(id*)arg1;
- (id)clusterFacesWithOptions:(id)arg1 error:(id*)arg2;
- (id)clusterMethod;
- (id)clusterState;
- (id)getClusteredFaceIds;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)getDistances:(id)arg1 to:(id)arg2;
- (id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)matrix;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)refinedSuggestionsForClusterIds:(id)arg1 fromClusters:(id)arg2 affinityThreshold:(float)arg3 error:(id*)arg4;
- (BOOL)removeFaces:(id)arg1 error:(id*)arg2;
- (void)reset;
- (BOOL)restoreClusterState:(id)arg1 cacheFolderPath:(id)arg2;
- (void)setMatrix:(id)arg1;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;
- (BOOL)useClusterObservation;

@end
