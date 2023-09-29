function towerOfHanoi(n, source, auxiliary, destination) {
    if (n === 1) {
        console.log(`Move disk 1 from ${source} to ${destination}`);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    console.log(`Move disk ${n} from ${source} to ${destination}`);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

const numDisks = 3; //Change this to the number of disks you want to solve for
console.log(`Tower of Hanoi with ${numDisks} disks:`);
towerOfHanoi(numDisks, 'A', 'B', 'C');
