for d in */; do
cd $d;

#sed -i 's|$K_ND_SVR|$MONI_SET|g' iteration.spec
sed -i 's|2 10.10.70.39:7892 GOLANG-0|GOLANG-0|g' iteration.spec
sed -i 's|2 10.10.70.39:NA NDSMOKE-0|GOLANG-0|g' iteration.spec
sed -i 's|2 10.10.70.39:7892 NDSMOKE-0|GOLANG-0|g' iteration.spec

cd ..
done

